#include <stdio.h>
#include <stdlib.h>

struct Alumno {
	char nombre[20];
	int edad;
	float promedio;
};

int main() {
	// 1. Reserva de memoria dinámica
	struct Alumno *ptr = malloc(sizeof(struct Alumno));
	
	if (ptr == NULL) {
		printf("Error al reservar memoria\n");
		return 1;
	}
	
	// 2. Cargar datos en la estructura a la que apunta ptr
	printf("Ingrese nombre: ");
	scanf("%19s", ptr->nombre);      // NO necesita & porque es un array
	
	printf("Ingrese edad: ");
	scanf("%d", &ptr->edad);
	
	printf("Ingrese promedio: ");
	scanf("%f", &ptr->promedio);
	
	// 3. Mostrar datos
	printf("\n--- Datos del alumno ---\n");
	printf("Nombre: %s\n", ptr->nombre);
	printf("Edad: %d\n", ptr->edad);
	printf("Promedio: %.2f\n", ptr->promedio);
	
	// 4. Liberar memoria
	free(ptr);
	
	return 0;
}
