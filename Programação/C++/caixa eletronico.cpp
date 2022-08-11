#include <stdio.h>

/* o usuario informa o valor do saque e o caixa eletronico separa as cedulas em notas de 100, 50, 20, 10, 5 e 2 reais  */

int main(){
	 	
	 int valor, n100, n50, n20, n10, n5, n2;
	 printf("Informe o valor do saque :");
	 scanf("%d",&valor);
	 
	 n100 = valor / 100;
	 n50 = valor % 100 /50;
	 n20 = valor % 100 % 50 /20;
	 n10 = valor % 100 % 50 % 20 /10;
	 n5 = valor % 100 % 50 % 20 % 10 /5; 
	 n2 = valor % 100 % 50 % 20 % 10 % 5 / 2;
	 
	
	 printf(" notas de 100 = %d", n100);
	 printf("\n notas de 50 = %d", n50);
	 printf("\n notas de 20 = %d", n20);
	 printf("\n notas de 10 = %d", n10);
	 printf("\n notas de 5 = %d", n5);
	 printf("\n notas de 2 = %d", n2);
	 
	 }
	 
