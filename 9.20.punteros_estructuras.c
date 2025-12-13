#include <stdio.h>
typedef struct {
	char apodo[20];
	int rango;
	float vida;
	float escudo;
	float sales;
	struct {
		char nombre [20];
		char apellido [20];
		int edad;
	} info_personal;
} personaje_t;

int main(int argc, char *argv[]) {
	
	personaje_t personaje , * pPersonaje ;
	pPersonaje = &personaje ;
	
	pPersonaje->vida=150.0;
 	pPersonaje->escudo=0;
	pPersonaje->sales=0;
	printf("la vida es: %.2f\n", pPersonaje->vida);
	printf("el escudo es: %.2f\n", pPersonaje->escudo);
	printf("las sales son: %.2f\n", pPersonaje->sales);
	
	printf("ingrese el apodo: \n");
	scanf("%s", pPersonaje->apodo);
	printf("el apodo es: %s\n", pPersonaje->apodo);
	
	printf("ingrese el nombre: \n");
	scanf("%s", pPersonaje->info_personal.nombre);
	printf("el nombre es: %s\n", pPersonaje->info_personal.nombre);
	
	printf("ingrese el apellido: \n");
	scanf("%s", pPersonaje->info_personal.apellido);
	printf("el apellido es: %s\n", pPersonaje->info_personal.apellido);
	
	printf("ingrese edad: \n");
	scanf("%d", &pPersonaje->info_personal.edad);
	
	return 0;
}

