#include <stdio.h>

void ingresar_positivo(int *);

int main(int argc, char *argv[]) {
	int var;
	int *d;
	
	d=&var;
	ingresar_positivo(d); //Al usar *d, estás pasando el valor de var, no su dirección.
						  //Por eso, deberías pasar simplemente el puntero d, sin el asterisco.
	
	printf("el valor del numero es: %d ", *d);
	
	return 0;
}
void ingresar_positivo(int *p){ 		//p es otro puntero, que recibe la misma dirección que tenía d
	                                     //Por lo tanto, p apunta al mismo lugar que d, o sea, a var.
	do{
		printf("ingrese un numero positivo: ");
		scanf("%d", p);
		
		if(*p<=0){
			printf("¡¡el numero debe ser positivo!!");
		}
	}while(*p<=0);
}
