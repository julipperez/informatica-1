#include <stdio.h>
#include <string.h>
struct alumno{
	int legajo;
	int dni;
	float notas[3];
	float promedio;
	char estado[10];
};
int main(int argc, char *argv[]) {
	struct alumno alumno_t[3];
	float sumatoria=0;
	int counter=0;
	
	for(int i=0; i<3; i++){
	do{
		printf("ingrese el legajo: \n");
		scanf("%d", &alumno_t[i].legajo);
		
		
		if(alumno_t[i].legajo<=0){
			printf("¡EL LEGAJO DEBE SER POSITIVO!. ingrese nuevamente\n");
		}
	}while(alumno_t[i].legajo<=0);
	
	do{
		printf("ingrese el DNI: \n");
		scanf("%d", &alumno_t[i].dni);
		
		
		if(alumno_t[i].dni<=0){
			printf("¡EL DNI DEBE SER POSITIVO!. ingrese nuevamente\n");
		}
	}while(alumno_t[i].dni<=0);
	
	for(int j=0; j<3; j++){
		
		do{
		printf("ingrese la nota[%d]: ",j+1);
		scanf("%f", &alumno_t[i].notas[j]);
		}while(alumno_t[i].notas[j]<0 || alumno_t[i].notas[j]>10);
		
		if(alumno_t[i].notas[j]<0 || alumno_t[i].notas[j]>10){
			printf("la nota va de 1 a 10, ingrese nuevamente\n");
		}
		
		sumatoria=sumatoria+alumno_t[i].notas[j];
		counter++;
	}
	
	alumno_t[i].promedio= (float) sumatoria/counter;

	
	printf("el promedio es: %f\n", alumno_t[i].promedio);
	
	//porque esto no se puede --->Esto no se puede porque en C no se puede asignar una cadena directamente a un arreglo de char después de su declaración.
								//Los arreglos no pueden recibir valores con el operador = una vez creados.
								//se pueden llenar carácter por carácter o usando funciones especiales como strcpy.
	
	//if(alumno_t[i].promedio>=8){  
		//alumno_t[i].estado[10]={"promocionado"};
	//} else if (alumno_t[i].promedio>=6 || alumno_t[i].promedio<8){ 
		//alumno_t[i].estado[10]={"regular"};
	//}else {
	//	alumno_t[i].estado[10]={"libre"};
	//
	if (alumno_t[i].promedio >= 8) {
		strcpy(alumno_t[i].estado, "Promocionado");  //la funcion strcpy Copiá la cadena que está en origen dentro del arreglo destino
									                 //Lo que hace internamente es copiar, carácter por carácter:'P' 'r' 'o' 'm' 'o' 'c' 'i' 'o' 'n' 'a' 'd' 'o' '\0'
													//al arreglo estado.
	} else if (alumno_t[i].promedio >= 6 && alumno_t[i].promedio < 8) { // va con && Porque querés que sea mayor o igual a 6 y menor a 8.
		strcpy(alumno_t[i].estado, "Regular");
	} else {
		strcpy(alumno_t[i].estado, "Libre");
	}
	printf("\n--- Datos del alumno %d ---\n", i + 1);
	printf("Promedio: %.2f\n", alumno_t[i].promedio);
	printf("Estado académico: %s\n", alumno_t[i].estado);
	}
return 0;
}

