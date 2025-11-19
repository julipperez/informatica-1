#include <stdio.h>

struct Persona {
	char nombre[20];
	int edad;
};

int main() {
	struct Persona p;
	struct Persona *ptr = &p;
	
	printf("Ingrese nombre: ");
	scanf("%s", ptr->nombre);
	
	printf("Ingrese edad: ");
	scanf("%d", &ptr->edad);
	
	printf("\nNombre: %s", ptr->nombre);
	printf("\nEdad: %d\n", ptr->edad);
	
	return 0;
}
