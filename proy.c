#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#define W 10
#define H 10
#define ENEMIGOS_TIEMPO 3
#define NUM_ENEMIGOS 30
#define NUM_JUGADOR 14
#define NUM_ENEMIGO 2
int tablero[W][H];
int tiempos;
int enemigos_jugando;
int jug_x;
int jug_y;
int enemigos[NUM_ENEMIGOS][2];
char entradas(){
  char letra;
  scanf("%c", &letra);
  fflush(stdout);
  if(letra != 'w' && letra != 'a' && letra != 's' && letra != 'd') return 0;
  return letra;
}
void nuevo_enemigo(){
  enemigos[enemigos_jugando][0] = rand()%W;
  enemigos[enemigos_jugando][1] = rand()%H;
  tablero[enemigos[enemigos_jugando][0]][enemigos[enemigos_jugando][1]] = NUM_ENEMIGO;
  enemigos_jugando++;
}
int logica(char entrada){
  int i;
  if(entrada == 0) return 0;
  tablero[jug_y][jug_x] = 0;
  switch(entrada){
    case 'w':
      if(jug_y != 0)
        jug_y--;
    break;
    case 'a':
      if(jug_x != 0)
        jug_x--;
    break;
    case 's':
      if(jug_y != W-1)
        jug_y++;
    break;
    case 'd':
      if(jug_x != H-1)
        jug_x++;
    break;
  }
  tablero[jug_y][jug_x] = NUM_JUGADOR;

  for(i = 0; i<enemigos_jugando; i++){
    tablero[enemigos[i][0]][enemigos[i][1]] = 0;
    if(rand()%2 == 0){
      if(jug_y > enemigos[i][0])
        enemigos[i][0]++;
      else
        enemigos[i][0]--;
    }
    else if(rand()%2 == 1){
      if(jug_x > enemigos[i][1])
        enemigos[i][1]++;
      else
        enemigos[i][1]--;
    }
    tablero[enemigos[i][0]][enemigos[i][1]] = NUM_ENEMIGO;
  }

  //
  for (i = 0; i < enemigos_jugando; ++i){
    if(jug_y == enemigos[i][0] && jug_x == enemigos[i][1]){
      return 1;
    }
  }
  if(!(tiempos%3))
    nuevo_enemigo();

  return 0;
}
void dibujo(){
  int i, j;
  system("cls");
  printf(" ----------\n");
  for (i = 0; i < W; ++i){
    printf("|");
    for (j = 0; j < H; ++j){
      printf("%c", tablero[i][j]);
    }
    printf("|\n");
  }
  printf(" ----------\n");

}
void init(){
  int i, j;
  srand(time(NULL));
  for (i = 0; i < W; ++i)
    for (j = 0; j < H; ++j)
      tablero[i][j] = 0;

  for (i = 0; i < NUM_ENEMIGOS; ++i)
    for(j = 0; j < 2; j++)
      enemigos[i][j] = 0;

  enemigos_jugando = 1;
  jug_y = 3;
  jug_x = 3;
  enemigos[0][0] = 8;
  enemigos[0][1] = 8;
  tablero[enemigos[0][0]][enemigos[0][1]] = NUM_ENEMIGO;
  tablero[jug_y][jug_x] = NUM_JUGADOR;
  tiempos = 1;
}
int main(){
  int salida = 0;
  char entrada;
  init();
  printf("Dame cualquier tecla para iniciar");
  getchar();
  while(!salida){
    entrada = entradas();
    salida = logica(entrada);
    dibujo();
    tiempos++;
  }
  printf("Pierdes");
  return 0;
}