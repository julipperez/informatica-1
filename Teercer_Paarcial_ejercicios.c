#include <stdio.h>
#include <stdlib.h>

struct inventario{
	int p1,p2,p3;
	char arreglo[3];
	int *p;
};
int main(int argc, char *argv[]) {
	int x=5;
	int *p;
	printf("el valor de x es: %d\n", x);
	p=&x;
	printf("el valor de x es: %d\n", *p);
	*p=10;
	printf("el valor de x es: %d\n", *p);
	printf("el valor de x es: %d\n", x);
	
	//puntero a funcion
	float (*pf)(float, float);
	//arreglo de punteros
	float (*arreglo[5])(float, float);
	
	//reservar memoria
	struct inventario *pt=malloc(10 * sizeof(struct inventario));

	return 0;
}

