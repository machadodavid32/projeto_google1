#include <stdio.h>

int main() {
	
	
int valor, n200, n100, n50, n20;
printf("Informe o valor do saque: ");
scanf("%d",&valor);

n200 = valor / 200;
n100 = valor % 200 / 100;
n50 = valor % 200 % 100 / 50;
n20 = valor % 200 % 100 % 50 / 20;	
	
printf(" notas de 200 = %d", n200);
printf("\n notas de 100 = %d ", n100);
printf("\n notas de 50 = %d", n50);
printf("\n notas de 20 = %d", n20);	
}
