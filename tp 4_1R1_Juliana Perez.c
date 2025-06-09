#include <stdio.h>

int main(int argc, char *argv[]) {
	int nota;
	
	printf("ingrese la nota: ");
	scanf("%d",&nota);
	
	if(nota>=90){
		printf("calificacion A");
	}else if (nota>=80 && nota<=90){
		printf("calificacion B");
	}else if (nota >=70 && nota<=80){
		printf("calificacion c");
	}else if (nota>= 60 &&nota<=70){
		printf("calificacion d");
	}else if (nota<60){
		printf("calificacion F");
	}
	return 0;
}

