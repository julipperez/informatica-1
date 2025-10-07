#include <stdio.h>
#define cant_alum 3
struct alumno{
	char apellido [20];
	char nombre[20];
	int legajo;
	char curso [3];
	int notas[3];
	float promedio;
	char estado;
	
};

int main(int argc, char *argv[]) {
	
	struct alumno alumnos[cant_alum];
	
	for(int i=0; i<cant_alum;  i++){ //como empezamos desde 0 no ponemos <=3. sino serian 4 alumnos
		printf("ingrese los datos edl alumno %d: ",i);
		scanf("%d", &alumnos[i].legajo);
		do{
			printf("ingrese el legajo: ");
			scanf("%d", &alumnos[i].legajo);
			
			if(alumnos[i].legajo<1){
				printf("el numero debe ser positivo");
			}
			
		} while(alumnos[i].legajo<1);
		
	}
	

	
	return 0;
}

