#include <stdio.h>
#include <string.h>

struct inventario{
	char nombre[30];
	int numero_parte;
	float precio;
	int stock;
};
void imprimir_inventario ( struct inventario item );
int main(int argc, char *argv[]) {

	struct inventario item1; // tengo una variable "item1"de tipo struct inventario
	
	strcpy(item1.nombre,"tomate");
	item1.numero_parte=123;
	item1.precio=32.5;
	item1.stock=234;	
	
	imprimir_inventario(item1);
	
	return 0;
}
void imprimir_inventario ( struct inventario item ){
	printf("el nombre es %s\n", item.nombre);
	printf("el numero es: %d\n", item.numero_parte);
	printf("el precio es: %f\n", item.precio);
	printf("el numero de stock es: %d", item.stock);
}
