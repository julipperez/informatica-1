#include <stdio.h>

int main(int argc, char *argv[]) {
	int num_estudiantes, cantidad, calificacion;
	
	printf("ingrese el numero de estudiantes: ");
	scanf("%d",&num_estudiantes);
	
	if(num_estudiantes>0){
		cantidad=num_estudiantes;
	} else {
		printf("ingrese un numero positivo");
	}
	
	for(int i=0; i<=cantidad; i++){
		printf("ingrese la calificacion entre (0-100):  ");
		scanf("%d", &calificacion);
		
		if(calificacion>0 && calificacion<100 ){
			printf("ingrese la calificacion entre (0-100):  ");
			scanf("%d", &calificacion);
		}
		else{
			printf("la calificacion no esta en el rango correspondiente ");
		}	
	}
	
	return 0;
}

