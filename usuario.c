#include <stdio.h>
#include <string.h>
int main(){
	char nombre[15] = "Juan";
	char clave[15] = "Admin123";
	char usuario[15];
	char passwd[15];
	int acceso = 0, i;

	do{
		printf("Ingresa un usuario:\n");
		gets(usuario);
		printf("Ingresa contrasena\n");
		gets(passwd);
		if(strcmp(nombre, usuario) == 0){

		}
		
		/*for(i=0; nombre[i]!='\0'; i++){

			if(!nombre[i] == usuario[i]){
				printf("Usuario invalido\n");
				acceso = 0;
				break;
			}
			else{
				acceso = 1;
			}
		}*/
		for(i=0; clave[i]!='\0'; i++){
			if(clave[i] != passwd[i]){
				printf("Usuario invalido\n");
				acceso = 0;
				break;
			}
			else{
				acceso = 1;
			}
		}
	}while(!acceso);
	printf("Bienvenido :)");
	return 0;
}