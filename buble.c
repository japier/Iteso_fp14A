#include <stdio.h>
#include <time.h>
#define TAMANIO 1000000
int main(){
	int ultimo_sensor;
	int numeros[TAMANIO];
	int i, j, temp;
	for(i=0; i<TAMANIO; i++)
		numeros[i] = rand()%1000;

	for(i=0; i<TAMANIO-1; i++){
		for(j=0; j<=TAMANIO-2; j++){
			if(numeros[j] > numeros[j+1]){
				if(sensado<30)
					ultimo_sensor = id_sensor;
				temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		}
	}
	for(i=0; i<TAMANIO; i++)
		printf("%d ", numeros[i]);
	return 0;
}