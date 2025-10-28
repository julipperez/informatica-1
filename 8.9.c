#include <stdio.h>
#define N 10

void validar_positividad(int *a); //a es un puntero a int, o sea, una variable que guarda una dirección de memoria de un entero.
								  //Dentro de la función, para acceder o modificar el valor al que apunta a, usamos el operador de indirección *:
void validar_no_primo(int *a);
int es_primo(int n);

int main(void) {
	int arreglo[N];
	
	// Cargar los N valores validados
	for (int i = 0; i < N; i++) {
		validar_positividad(&arreglo[i]); //Esa línea no pasa el valor de arreglo[i] 
		                                  //sino la dirección de memoria donde está guardado.
										  //Qué pasaría si usáramos sin el &: Entonces estarías pasando una copia del valor, no su dirección.
										  //Dentro de la función, cualquier cambio afectaría solo a la copia, no al arreglo original.
	}
	
	// Modificar los primos
	for (int i = 0; i < N; i++) {
		validar_no_primo(&arreglo[i]);
	}
	
	// Mostrar resultados
	printf("\nValores finales del arreglo:\n");
	for (int i = 0; i < N; i++) {
		printf("%d ", arreglo[i]);
	}
	
	return 0;
}

/*------------------- FUNCIONES -------------------*/

// Requisito 1: validar positividad y rango (<100)
void validar_positividad(int *a) {
	int valor;
	do {
		printf("Ingrese un valor positivo (<100): ");
		scanf("%d", &valor);
		if (valor < 0 || valor >= 100)
			printf("Error: el valor debe ser >=0 y <100\n");
	} while (valor < 0 || valor >= 100);
	
	*a = valor; // guardamos el valor en la dirección apuntada. significa: “guardá este valor en la dirección de memoria que me pasaron”.
}				//En consecuencia, se cambia directamente el valor de arreglo[i] del programa principal.

// Requisito 2: incrementar si es primo
void validar_no_primo(int *a) {
	if (es_primo(*a)) {
		(*a)++; // si es primo, se incrementa en 1
	}
}

// Función auxiliar: determina si un número es primo
int es_primo(int n) {
	if (n < 2) return 0; // 0 y 1 no son primos
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return 0; // no es primo
	}
	return 1; // es primo
}
