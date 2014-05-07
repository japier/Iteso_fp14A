#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ITEMS{
	char * nombre;
	int ataque;
	char * poder;
	char * tipo;
	int id;
}ITEMS;
typedef struct JUGADOR{
	char * nombre;
	int vida;
	int items;
	int progreso;
}JUGADOR;
ITEMS items[10];
void cargarITEMS(){
	FILE * f;
	f = fopen("items.txt", "r");
	char * linea = malloc(sizeof(char)*50);
	char * valor = malloc(sizeof(char)*30);
	items[0].nombre = malloc(sizeof(char)*30);
	items[0].poder = malloc(sizeof(char)*30);
	items[0].tipo = malloc(sizeof(char)*30);
	fscanf(f, "%s", linea);
	valor = strtok(linea, ",");
	items[0].id = atoi(valor);
	items[0].nombre = strtok(NULL, ",");
	items[0].ataque  = atoi(strtok(NULL, ","));
	items[0].poder = strtok(NULL, ",");
	items[0].tipo = strtok(NULL, ",");
	printf("%d %s\n", items[0].id, items[0].nombre);
	close(f);
}

JUGADOR cargarPartida(){
	FILE * f;
	JUGADOR jugadorCargado;
	char * linea = malloc(sizeof(char)*50);
	char * valor = malloc(sizeof(char)*30);
	jugadorCargado.nombre = malloc(sizeof(char)*50);
	f = fopen("archivo.txt", "r");
	fscanf(f, "%s", linea);
	valor = strtok(linea, ",");
	jugadorCargado.nombre = valor;
	valor = strtok(NULL, ",");
	jugadorCargado.vida = atoi(valor);
	valor = strtok(NULL, ",");
	jugadorCargado.items = atoi(valor);
	valor = strtok(NULL, ",");
	jugadorCargado.progreso = atoi(valor);
	close(f);
	return jugadorCargado;
}
void guardarJugador(JUGADOR jugador){
	FILE * f;
	f = fopen("archivo.txt", "a");
	fprintf(f, "%s,%d,%s,%d\n",jugador.nombre, jugador.vida,
		jugador.items,jugador.progreso);
	close(f);
}
int main(int argc, char const *argv[])
{
	JUGADOR nuevoJugador;
	cargarITEMS();
	nuevoJugador = cargarPartida();
	printf("Nombre del Jugador %s\n", nuevoJugador.nombre);
	printf("Vidas del Jugador %d\n", nuevoJugador.vida);
	printf("Items del Jugador %s\n", items[nuevoJugador.items-1].nombre);
	printf("Progreso del Jugador %d\n", nuevoJugador.progreso);

	nuevoJugador.vida--;
	nuevoJugador.progreso++;
	//guardarJugador(nuevoJugador);
	return 0;
}