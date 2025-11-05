#include <stdio.h> 
#define TAM 500 
void carga (int a[], int n); 

int main ( void ) { 
	int valor, arreglo[TAM]; 
	
	printf("ingrese el valor: "); 
	scanf("%d", &valor); 
	
	carga(arreglo,valor); 
	return 0; 
} 
void carga (int a[], int n){ 
	
	for (int i=0; i<n; i++){ 
		printf("ingrese el valor del arreglo[%d]: ", i); 
		scanf("%d", &a[i]); 
	} 
	for(int i=0; i<n; i++){ 
		printf("%d", a[i]); 
	} 
}
