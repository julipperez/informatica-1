#include <stdio.h>

int main(int argc, char *argv[]) {
	int vec[8];
	char cad[8];
	//impresion de direcciones de memoria para un int y para char
	for (int i=0; i<8; i++){
		printf("%p\n", &vec[i]);
	}
	printf("\n\n");
	for (int i=0; i<8; i++){
		printf("%p\n", &cad[i]);
	}
	printf("\n\n\n");
	
	int *p;
	p=&vec[0];
	//impresion de direcciones de memoria para un int y para char daDO por el puntero p
	
	for (int i=0; i<8; i++){
		printf("%p\n", p);
		//para avanzar en el puntero se utiliza el incremento
		p++;
	}
	printf("\n\n");
	
	char *q;
	q=&cad[0];
	for (int i=0; i<8; i++){
		printf("%p\n", q);
		//para avanzar en el puntero se utiliza el incremento
		q++;
	}
	return 0;
}

