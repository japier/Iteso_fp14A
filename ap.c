#include <stdio.h>
typedef struct ALUMNO{
	int nivel_suenio;
	char * nombre;
}ALUMNO;

void ordenar(int * arr){
	int i;
	for(i=0; i<4; i++){
		printf("%d\n", *arr++);
	}
	/*printf("%p\n", arr);
	arr++;
	printf("%p %p %d %d\n", arr, &arr[2], *arr, arr[1]);*/
}
void rev(int * in){

}
void rever(char * str){
	int i = 0, j;
	char temp;
	while(*(str+i) != '\0'){
		i++;
	}
	i--;
	for(j=0; j<=i/2; j++){
		temp = *(str+j);
		*(str+j) = *(str+i-j);
		*(str+i-j) = temp;
	}
}
int main()
{
	char nombre[10] = {"Cadena"};
	int arr[4] = {3, 5, 178, 2};
	int i;
	//ordenar(arr);

	rever(nombre);
	rev(&i);
	printf("%s\n", nombre);
	return 0;
}