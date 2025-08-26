#include <stdio.h>
#define TAM 5

int main(int argc, char *argv[]) {
	int arrA[TAM];
	int vec[TAM]={0};
	
	for ( int i=0; i<TAM; i++){
		printf("ingrese el valor del arreglo %d: ",i);
		scanf("%d",&arrA[i]);
	}
	
	for (int i=0; i<TAM; i++){
		if(i==0){ //se pone esta condicion porque se dañaria el codigo en laposicion menor a 0
			vec[i]=arrA[i]; //copio en vec el valor de arrA
		}
		else{
		vec[i]=arrA[i]+arrA[i-1]; //el valor del vector en la posicion actual mas el valor del vector  anterior
		}
	}
	for (int i=0; i<TAM; i++){
		printf("al elemento [%d] le corresponde %d\n", i, vec[i]);
	}
	return 0;
}

