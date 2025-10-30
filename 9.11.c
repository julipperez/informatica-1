#include <stdio.h>
#define N 30
#define TAM 3
struct proveedor {
	char nombre[N];
	int cuit;
};

struct producto{
	char nombre[N];
	float precio;
	struct proveedor prov; //prov es una variable que va a vincular a la estructura proveedor para encastrarla dentro de la estructura producto.
};

void leer_datos(struct producto parametro[], int j_parametro);

int main(int argc, char *argv[]) {
	struct producto prod[TAM];
	
	//cargar nombres de productos
	for(int i=0; i<TAM; i++){
		printf("ingrese el nombre del producto: \n");
		scanf("%s", prod[i].nombre); 
	}
	
	//cargar precios
	for(int i=0; i<TAM; i++){
		do{
		printf("ingrese el precio de producto [%d]: ",i+1);
		scanf("%f", &prod[i].precio);
		if(prod[i].precio<=0){
			printf("INGRESE EL PRECIO CORRECTAMENTE\n");
		}
		}while(prod[i].precio<=0);
	}
	
	//cargar nombres de proveedores
	
	for(int i=0; i<TAM; i++){
		printf("ingrese el nombre del proveedor del producto[%d]: \n",i+1);
		scanf("%s", prod[i].prov.nombre); 
	}
	//ingresar los cuit
	for(int i=0; i<TAM; i++){
		printf("ingrese el cuit del elemento [%d]: \n",i+1);
		scanf("%d", &prod[i].prov.cuit);
	}
	leer_datos(prod, TAM);
		
	return 0;
}
void leer_datos(struct producto parametro[], int j_parametro){
	for(int i=0; i<j_parametro; i++){
		printf("el nombre del producto [%d] es: %s\n",i+1, parametro[i].nombre);
		printf("el precio del producto [%d] es: %.2f\n",i+1, parametro[i].precio);
		printf("el nombre del proveedor [%d] es: %s\n",i+1, parametro[i].prov.nombre);
		printf("el cuit del proveedor [%d] es: %d\n",i+1, parametro[i].prov.cuit);
	}
}
