
#include<stdio.h>

int main() {
	float a;
	float b;
	int x;
	printf("Escribe dos numeros\n");
	scanf(a);
	scanf(b);
	while (x<>5) {
		printf("Elige una funcion\n");
		printf("1=suma\n");
		printf("2=resta\n");
		printf("3=multiplica\n");
		scanf(x);
		switch (x) {
		case 1:
			printf("La suma de\n",a,b,a+b);
			break;
		case 2:
			printf("La resta de\n",a,b,a-b);
			break;
		case 3:
			printf("La multiplicacion de\n",a,b,a*b);
			break;
		}
	}
	return 0;
}

