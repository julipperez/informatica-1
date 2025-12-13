#include <stdio.h>

struct producto{
	char nombre[20];
	float precio;
	int stock;
};

void cargar_producto(struct producto *p);
void imprimir_producto(struct producto p);
void actualizar_stock(struct producto *p, int cantidad);

int main(int argc, char *argv[]) {
	struct producto productito;
	struct producto *b;
	b=&productito;
	
	cargar_producto(b);//paso la direccion de memoria del puntero
	imprimir_producto(productito); //paso toda la structura
	
	int valor;
	printf("ingrese la cantidad de modificacion del stock. \n");
	scanf("%d",&valor);
	
	actualizar_stock(b, valor);
	
	printf("\nProducto actualizado:\n");
	imprimir_producto(productito);
	
	return 0;
}
void cargar_producto(struct producto *p){
	printf("ingrese el nombre: \n");
	scanf("%s", p->nombre);          
	printf("ingrese el precio: \n");
	scanf("%f", &p->precio);   
	printf("ingreese el stock: \n");
	scanf("%d", &p->stock);   
	}
void imprimir_producto(struct producto p){
	printf("el nombre es: %s\n", p.nombre);
	printf("el precio es: %.2f\n", p.precio);
	printf("el stock es: %d\n", p.stock);
}
void actualizar_stock(struct producto *p, int cantidad){
	p->stock= (p->stock)+ cantidad;
}
