#include <stdio.h>

 struct empleado{
	char nombre[20];
	float salario;
};

void modificacion(struct empleado *p);
void modificacion(struct empleado *p){
	p->salario;
 }
int main(int argc, char *argv[]) {
	struct empleado empleado1;
	
	printf("ingrese el nombre:\n ");
	scanf("%s", &empleado1.nombre);
	
	printf("ingrese el salario original:\n ");
	scanf("%f", &empleado1.salario);
	
	modificacion(&empleado1);
	printf("el salario con 50%% de aumento es %f:", ((empleado1.salario/100)*50+ empleado1.salario));

	
	return 0;
}

