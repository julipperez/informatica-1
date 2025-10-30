#include <stdio.h>

struct producto{
	char nombre[30];
	float precio;
	int cantidad;
};
struct producto cargar_producto(void); //no recibe parametros, pero devuelve. Al tener distintos tipos de datos la estructura
										//no devuelve un unico valor, por eso no lleva el tipo de dato antes del nombre de funcion
void imprimir_producto(struct producto p);

int main(int argc, char *argv[]) {
	struct producto p; //digo que voy a tener una estrucura "p" del tipo struct producto
	
	p=cargar_producto(); //Llamado de la funcion.A la estructura p se le asigna todos los datos de n que cargamos en la funcion
	
	imprimir_producto(p); //llamo a la funcion que me va a imprimir todo. Para pasar los parametros de la estructura, va solo el nombre ded la estrcutura
	
	return 0;
}
struct producto cargar_producto(void){
	struct producto n; //aca tengo que avisar que trabajo con la estructura producto llamada "n"
	
	printf("ingrese el nombre del producto: \n");
	scanf("%s", n.nombre); //accedo a la categoria NOMBRE de la estructura producto llamada n.
	
	do{
		printf("ingrese el precio del producto: \n");
		scanf("%f", &n.precio);
		
		if(n.precio<=0){
			printf("INGRESE EL PRECIO CORRECTO\n");
		}
	} while(n.precio<=0);
	
	do{
	printf("ingrese la cantidad del producto: \n");
	scanf("%d", &n.cantidad);
		if(n.cantidad<=0){
			printf("INGRESE LA CANTIDAD CORRECTA\n");
		}
	}while(n.cantidad<=0);
	
	return n; //yo voy a devolver todo lo que ingrese en n. N implcica nombre,precio y cantidad.
}
void imprimir_producto(struct producto p){
	printf("el nombre del producto es: %s\n", p.nombre);
	printf("el precio del producto es: %.2f\n", p.precio);
	printf("la cantidad del producto es: %d\n", p.cantidad);
}
