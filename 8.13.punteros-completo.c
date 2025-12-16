#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ingresar_cantidad_elementos ( void );
void inicializar_arreglo ( int * arr , int tam );
void contar_positivos (int *arr , int tam , int * cant_positivos);
void contar_negativos (int *arr , int tam , int * cant_negativos);
void copiar_positivos (int *arr , int * positivos , int tam);
void copiar_negativos (int *arr , int * negativos , int tam);
void imprimir_arreglo (int *arr , int tam);

int main ( void ) {
	int tam ;
	int * arreglo = NULL ;
	int * positivos = NULL , * negativos = NULL ;
	int cant_positivos = 0, cant_negativos = 0;
	srand ( time ( NULL )); // Inicializar la semilla para losnúmeros aleatorios
	
		// Requisito 1: Solicitar el tamaño del arreglo
		tam = ingresar_cantidad_elementos ();
		
	// Requisito 2: Reservar espacio para un arreglo dinámico
	arreglo= malloc(tam *sizeof(int));

	
	// Requisito 3: Inicializar el arreglo con valores pseudoaleatorios entre -100 y 100
		inicializar_arreglo ( arreglo , tam);
		
	// Contar la cantidad de números positivos y negativos
	contar_positivos ( arreglo , tam , &cant_positivos );
	contar_negativos ( arreglo , tam , &cant_negativos );
	
	// Requisito 5: Reservar espacio para los arreglos positivos y negativos
	
     positivos=malloc(cant_positivos *sizeof(int));
	 
	 negativos=malloc(cant_negativos*sizeof(int));
	 
		// Requisito 6: Copiar los valores positivos y negativos en los arreglos correspondientes
	
	copiar_positivos ( arreglo , positivos , tam );
	
	copiar_negativos ( arreglo , negativos , tam );
	
	// Imprimir resultados
	printf (" Arreglo original :\n");
	imprimir_arreglo ( arreglo , tam );
	printf ("\n\nArreglo de números positivos :\n");
	imprimir_arreglo ( positivos , cant_positivos);
	printf ("\n\nArreglo de números negativos :\n");
	imprimir_arreglo ( negativos , cant_negativos );
	// Liberar la memoria reservada
	free(arreglo);
	free(positivos);
	free(negativos);
	
	return 0;
}
int ingresar_cantidad_elementos( void ){
	int N=10;
	int tam;
	do{
	printf("ingrrse un numero positivo menor a N: \n");
	scanf("%d", &tam);
	
	if(tam<0 || tam>N){
		printf("el numero no entra en el rango");
	}
	}while(tam<0 || tam>N);
	
	return tam;
}
void inicializar_arreglo ( int *arr , int tam ){
	for(int i=0; i<tam; i++){
		arr[i]= -100+rand()%201;
		printf("el elemento %d del arreglo es: %d\n", i+1,arr[i]);
	}
}
void contar_positivos (int *arr , int tam , int *cant_positivos){
	for(int i=0; i<tam; i++){
		if((*(arr+i))>0){
			(*cant_positivos)++; //se utiliza entre parantesis para aumentar el valor. si hacemos *cant_positivos++ lo que hariamos seria aumentar la direcciin de memoria
		}
	}
	printf("hay %d positivos\n", *cant_positivos);
}
void contar_negativos (int *arr , int tam , int *cant_negativos){
	for(int i=0; i<tam; i++){
		if((*(arr+i))<0){
			(*cant_negativos)++;
		}
	}
	printf("hay %d negativos\n", *cant_negativos);
}
void copiar_positivos (int *arr , int * positivos , int tam){
	int j=0;
		for(int i=0; i<tam; i++){
			if(arr[i]>0){
				positivos[j]=arr[i];
				j++;
			}
		}
}
void copiar_negativos (int *arr , int * negativos , int tam){
	int j=0;
		for(int i=0; i<tam; i++){ 
			if(arr[i]<0){
					negativos[j]=arr[i];
					j++; //i sirve para recorrer el arreglo original . j sirve para llenar el arreglo nuevo, que es más chico
			}
		}
}
void imprimir_arreglo (int *arr , int tam){
	for(int i=0; i<tam; i++){
		printf("el valor %d del arreglo es: %d\n", i+1, arr[i]);
	}
}
