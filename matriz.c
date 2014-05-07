#include <stdio.h>
#include <time.h>
int operaciones(int opcion, int num1, int num2){
  int resultado;
  switch(opcion){
    case 1://sumar
      resultado = num1 + num2;
    break;
    case 2://Restar
      resultado = num1 - num2;
    break;
    case 3://Multiplicar
      resultado = num1 * num2;
    break;
    case 4://Dividir
      resultado = num1 % num2;
    break;
  }
  return resultado;
}
int main(int numero_de_parametros, char * arreglo_de_parametros[]){
  int matriz[4][4];
  int resultado[4][4];
  int i, j, k, temp;
  srand(time(NULL));
  if(numero_de_parametros == 2){
    printf("%s\n", arreglo_de_parametros[1]);
  }
  for (i = 0; i < 4; ++i){
    for (j = 0; j < 4; ++j){
      matriz[i][j] = rand()%10;
      resultado[i][j] = (j > 1)?1:0;
    }
  }
  for(k = 0; k < 4; k++)
    for (i = 0; i < 4; ++i){
      for (j = 0; j < 4; ++j){
        if(matriz[i][j] == 0)
          matriz[i][j] = 1;
        if(resultado[i][k] == 0)
          resultado[i][k] = 1;
        resultado[i][k] = operaciones(k+1, matriz[i][j], resultado[i][k]);
      }
    }
  //Ordenar numeros
  for (i = 0; i < 4; ++i){
    for (j = 0; j < 4; ++j){
      for (k = 0; k < 3; ++k){
        if(resultado[i][k] > resultado[i][k+1]){
          temp = resultado[i][k];
          resultado[i][k] = resultado[i][k+1];
          resultado[i][k+1] = temp;
        }
      }
    }
  }
  for (i = 0; i < 4; ++i){
    for (j = 0; j < 4; ++j){
      for (k = 0; k < 3; ++k){
        if(resultado[k][i] > resultado[k+1][i]){
          temp = resultado[k][i];
          resultado[k][i] = resultado[k+1][i];
          resultado[k+1][i] = temp;
        }
      }
    }
  }
  //Imprimir
  for (i = 0; i < 4; ++i){
    for (j = 0; j < 4; ++j){
      printf("%d ", resultado[i][j]);
    }
    printf("\n");
  }
  return 0;
}