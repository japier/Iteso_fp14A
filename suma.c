#include <stdio.h>
int x = 3;
typedef struct ALUMNO{
	int numero;
}ALUMNO;
int arr[2][8] = {
	{4, 2, 2, 5, 5 , 8, 8, 6},//0
	{5,6,8,1,56,3,5,6} //1
};
void resta(int x, int y);
int return3();
int sumA(int x, int y);
char finLinea();
int return5(int z);

int main(){
	int suma = sumA(2, 3);
	int z = x;
	int x = x;
	int y = return5(return3());
	printf("%d, %d %c", arr[1][0], x, finLinea());
	printf("Salte?");
	resta(2, 2);
	return 0;
}
int return3(){
	return 5;
}
void resta(int x, int y){
	return;
	printf("Hola");
}

int sumA(int x, int y){
	return x+y; //NO!!
}
char finLinea(){
	return '\n';
}
int return5(int z){
	return 5+x;
}

int verificarEntrada(int numero){
	//<12 => 6
	//>= 0 => 1
	// 
}
void imprimirPiramide(int numero){ //2
	*
	**
	*
}
int main(){
	int numero;
	scanf("%d", &numero);
	imprimirPiramide(verificarEntrada(numero));
	return 0;
}