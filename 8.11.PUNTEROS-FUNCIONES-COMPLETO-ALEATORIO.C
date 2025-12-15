#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
void inicializar_arreglo ( int *arr , int tam );
void contar_positivos (int *arr , int tam , int * cant_positivos);
void contar_negativos (int *arr , int tam , int * cant_negativos);
void copiar_positivos (int *arr , int * positivos , int tam);
void copiar_negativos (int *arr , int * negativos , int tam);
void imprimir_arreglo (int *arr , int tam);

int main ( void ) {
	int arreglo [N] = {0};
	int positivos [N] = {0}, negativos [N] = {0};
	int cant_positivos = 0,cant_negativos = 0;
	srand(time( NULL )); // Inicializar semilla para números aleatorios
	
	
	inicializar_arreglo (arreglo ,N);
	
	
	// Contar positivos y negativos
	contar_positivos (arreglo,N,&cant_positivos );
	printf ("\n\nCantidad de números positivos : %d\n",cant_positivos );
	
	contar_negativos ( arreglo,N,&cant_negativos );
	
	printf ("\n\nCantidad de números negativos : %d\n",cant_negativos );
	
	
	// Copiar positivos y negativos a sus respectivos arreglos
	copiar_positivos ( arreglo , positivos , N);
	copiar_negativos ( arreglo , negativos , N);
	// Imprimir resultados
	printf (" Arreglo original :\n");
	imprimir_arreglo (arreglo, N);
	printf (" Arreglo de números positivos :\n");
	imprimir_arreglo(positivos, N);
	
	printf (" Arreglo de números negativos :\n");
	imprimir_arreglo(negativos, N);
	
	return 0;
}
// Inicializar arreglo con valores pseudoaleatorios entre -300 y 500
void inicializar_arreglo( int *arr , int tam ){
	for(int i=0; i<tam; i++){
	    arr[i]= -300 + rand()%801; // No se puede escribir *arr[i] ya que el puntero señala a la direccion de memoria del PRIMER elemento, osea solo cargarias al primer elemento. 
			
		printf("%d", arr[i]); //no va *arr, pq esto solo imprime el primer elemento
	}
}
void contar_positivos (int *arr , int tam , int * cant_positivos){
	for(int i=0; i<tam; i++){
		if(arr[i]>0){
			(*cant_positivos)++;
		}
	}
}
void contar_negativos (int *arr , int tam , int * cant_negativos){
	for(int i=0; i<tam; i++){
		if(arr[i]<0){
			(*cant_negativos)++;
		}
	}
}
void copiar_positivos (int *arr ,int *positivos , int tam){
	for(int i=0; i<tam; i++){
		if(arr[i]>0){
			positivos[i]=arr[i];
		}
	}
}
void copiar_negativos (int *arr ,int *negativos ,int tam){
	for(int i=0; i<tam; i++){
		if(arr[i]>0){
			negativos[i]=arr[i];
		}
	}
}
void imprimir_arreglo (int *arr , int tam){
	for(int i=0; i<tam; i++){
		printf("El valor %d del arreglo es: %d\n", i+1, arr[i]);
	}
}
