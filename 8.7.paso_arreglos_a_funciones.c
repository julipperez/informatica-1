#include <stdio.h>
#define TAM 5

void carga ( int a[], int n);

int main(int argc, char *argv[]) {
	int n;
	int arreglo [TAM];
	
	printf ("Ingrese la cantidad de elementos : ");
	scanf (" %d", &n);

	carga(arreglo, n);
	
	return 0;
}

void carga ( int a[], int n){
	
	for (int i = 0; i < n; i ++)
	{
		printf (" Ingrese el elemento [ %d]: ", i);
		scanf (" %d", &a[i]);
	}
	for (int i = 0; i < n; i ++){
		printf (" %d\n", a[i]);
	}
}
