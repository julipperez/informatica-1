#include <stdio.h>
#include <string.h>
	
struct alumno{
	char nombre[30];
	int legajo;
	int notas[3];
	float promedio;
	char estado[10];
};
void cargar_alumno(struct alumno *a);
void calcular_promedio(struct alumno *a);
void determinar_estado(struct alumno *a);
void imprimir_alumno(struct alumno a);

int main(int argc, char *argv[]) {
	struct alumno alumnito; //variable del tipo "struct alumno" 
	struct alumno *d;    // puntero de tipo "struct alumno"
	d=&alumnito; // se le asigna la direccion de memoria de alumnito al puntero d
	
	cargar_alumno(d);
	calcular_promedio(d);
	determinar_estado(d);
	imprimir_alumno(alumnito);
	
	return 0;
}
void cargar_alumno(struct alumno *a){
	printf("ingrese el nimbre del alumno: \n");
	scanf("%s", a->nombre);
	
	printf("ingrese el legajo: \n");
	scanf("%d", &a->legajo);
		
	for(int i=0; i<3; i++){
		do{
		printf("ingrese la nota: \n");
		scanf("%d", &a->notas[i]);
		
		if(a->notas[i]<0 || a->notas[i]>10){
			printf("La nota no esta en el rango\n");
		}
		
		}while(a->notas[i]<0 || a->notas[i]>10);
		
	}
}
void calcular_promedio(struct alumno *a){
	int sumatoria=0;
	
	for(int i=0; i<3; i++){
		sumatoria=sumatoria+a->notas[i];
	}
	a->promedio=(float)sumatoria/3;
}
void determinar_estado(struct alumno *a){
	if(a->promedio>=8){
		strcpy(a->estado,"promocionado");
	}else if(a->promedio>=6 && a->promedio<8){
		strcpy(a->estado,"regular");
	}else {
		strcpy(a->estado,"libre");
	}
}
void imprimir_alumno(struct alumno a){
	printf("el nombre es: %s\n", a.nombre);
	printf("el legajo es: %d\n", a.legajo);
	printf("el promedio es: %f\n", a.promedio);
	printf("el estado es: %s\n", a.estado); 
	
}
	
