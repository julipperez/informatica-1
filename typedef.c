#include <stdio.h>

// Definimos un tipo de dato "Persona" usando typedef
typedef struct {
	char nombre[50];
	int edad;
} Persona;

int main() {
	// Creamos variables del nuevo tipo Persona
	Persona p1 = {"Natalia", 22};
	Persona p2 = {"Carlos", 30};
	
	// Mostramos los datos
	printf("Nombre: %s, Edad: %d\n", p1.nombre, p1.edad);
	printf("Nombre: %s, Edad: %d\n", p2.nombre, p2.edad);
	
	return 0;
}

