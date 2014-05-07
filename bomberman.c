#include <stdio.h>
int tablero[20][20];
void init(){
	int i, j;
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			tablero[i][j] = 0;
		}
	}
}
int entra(){
	return 0;
}
void logica(){

}
void dibujo(){

}
int main(){
	init();
	while(1){
		entra();
		logica();
		dibujo();
	}
	return 0;
}