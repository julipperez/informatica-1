#include <stdio.h>

int main(int argc, char *argv[]) {
	char cadena[6]={'a','b','c','d','e','0'};
	
	printf("la direccion de memoria dada por la cadena es: %p\n", (void*)&cadena[0]);
	printf("direccion de cadena (primer elemento): %p\n", (void*)cadena);
	printf("el valor de la letra es: %c\n", cadena[2]);
	
	char *p;
	p=cadena;
	
	printf("la direccion de memoria del puntero es: %p\n", (void*)p); //ACA ME VA A DAR VALORES DISITNTOS, PORQUE ESTAMOS PIDIENDO LA DIRECCION DEL PUNTERO
	printf("la direccion de memoria dada por el puntero es: %c\n\n", *p); //ACA SI VA A COINCIDIR LAS DIRECCIONES DE MEMORIA, PORQUE EL PUNTERO TIENE POR
																	  //VALOR LA DIRECCION DE MEMORIA A LA QUE APUNTA
	//Ahora aplico aritmetica de punteros
	p+=2;
	printf("la direccion de memoria del puntero es: %p\n", (void*)p);
	printf("la direccion de memoria desplazada dada por el puntero es: %c\n", *p);
	
	//valores
	printf("el valor de la letra dada por el puntero p es: %c\n", *(p+0));
	printf("el valor de la letra dada por el puntero p es: %c", p[0]);
	
	return 0;
}

