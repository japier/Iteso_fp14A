#include <stdio.h>
typedef struct JUGADOR{
	int vida;
	int mana;
	char * nombre;
	int nivel;
	int xp;
	int tipo;
}JUGADOR;

void sumarVida(JUGADOR * jugador1){
	jugador1->vida++;
	printf("Vida del jugador es %d %p\n", jugador1->vida, jugador1);
}
void sumar(int * x, int y){
	*x = *x + y;
	printf("%p\n", x);
}
void imprimir(int * x){
	printf("--%d\n", x);
	
}
int main()
{
	int x=4, y=5;
	char nombre[10] = {"LUNES"};
	JUGADOR jugador1;
	jugador1.vida = 3;
	jugador1.mana = 10;
	imprimir(&x);
	sumarVida(&jugador1);
	printf("%s, %p %c\n", nombre, (nombre+1), *(nombre+1));
	printf("Vida del jugador es %d %p\n", jugador1.vida, &jugador1);
	return 0;
}