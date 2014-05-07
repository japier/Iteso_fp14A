#include <stdio.h>
float resultado = 30;
float operaciones(int z, int n, int num23, int x);
void imprimir(float valor_imprimir){
  printf("%.2f\n", valor_imprimir);
}

int main(int num, char * arr[]){
  float resultado = operaciones(3, 27, 3, 3) + operaciones(4, 1000, 30, 6);
  imprimir(resultado);
  return 0;
}
float operaciones(int opcion, int num1, int num2){
  float resultado;
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
      resultado = num1 / num2;
    break;
  }
  return resultado;
}