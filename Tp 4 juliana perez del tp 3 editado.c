#include <stdio.h>

int main(int argc, char *argv[]) {
	int nota;
	
	printf("ingrese la nota: ");
	scanf("%d",&nota);
	
	if(nota>=90){
		printf("calificacion A\n");
			printf("Condicion excelente");
	}else if (nota>=80 && nota<=90){
		printf("calificacion B\n");
			printf("condicion muy buena");
	}else if (nota >=70 && nota<=80){
		printf("calificacion C\n");
			printf("Condicion buena");
	}else if (nota>= 60 &&nota<=70){
		printf("calificacion D\n");
			printf("Condicion regular");
	}else if (nota<60){
		printf("calificacion F\n");
			printf("Condicion insuficiente");
	}
	return 0;
}

