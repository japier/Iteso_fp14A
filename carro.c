#include <stdio.h>
#include <string.h>
struct Sonido{
	int num_bocinas;
	char estereo[40];
	int auxiliar;
	int cantidad_swag;
};

typedef struct Carro{
	char marca[10];
	char modelo[20];
	float precio;
	int color;
	int anio;
	char descipcion[100];
	struct Sonido equipo_sonido;
} Carro;
void imprimir(Carro carro1){
	printf("Carro es: %s %s %d %.2f %d\n",carro1.marca, carro1.modelo, carro1.anio, 
		carro1.precio, carro1.color);
}
Carro informacion(){
	Carro carro1;
	printf("Dame una marca ");
	gets(carro1.marca);
	printf("Dame una modelo ");
	gets(carro1.modelo);
	printf("Dame una año ");
	scanf("%d", &carro1.anio);
	printf("Dame una precio ");
	scanf("%f", &carro1.precio);
	printf("Dame una color ");
	scanf("%d", &carro1.color);
	return carro1;
}
int main(){
	Carro carro1 = informacion();
	carro1.equipo_sonido.cantidad_swag = 1;
	imprimir(carro1);
	return 0;
}