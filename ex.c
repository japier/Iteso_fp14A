#include <stdio.h>

typedef struct FECHA{
	int dia; //15
	int mes; //4
	int anio; //2010
	char nombre[15];
}FECHA;
int sumar(int * x, int y){
	printf("%p", x);
	return 9;
}
int regresarDiaAnio(FECHA fecha){
	int i, resultado = 0;
	for(i=1; i <= fecha.mes; i++){
		if(i%2 == 0){
			resultado += 30;
		}
		else
			resultado += 31;
	}
	resultado += fecha.dia;
	return resultado;
}

int main(){
	int resultado;
	FECHA fecha;
	int x=4, y=5;
	fecha.dia = 15;
	fecha.mes = ;
	fecha.anio = 2010;
	resultado = regresarDiaAnio(fecha);
	printf("%d\n", resultado);
	sumar(&x, y);
	return 0;
}