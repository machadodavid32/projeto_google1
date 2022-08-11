#include <stdio.h>

/* Numero palindromo de 3 numeros Exemplo 212 595 999 343
Informe um numero com 3 digitos, se palindromo e par */

int main () {
	int valor, centena, dezena, unidade;
	printf("Informe um numero ");
	scanf("%d",&valor);
	
	if(valor > 99 && valor < 1000){
		
		centena = valor / 100;
		dezena = valor % 100 / 10;
		unidade = valor % 100 % 10;
		
		printf("centena = %d", centena);
		printf("\ndezena = %d", dezena);
		printf("\nunidade = %d", unidade);
		
		if ( (centena == unidade) && (valor % 2 ==0)){
			
			printf("\nPalindromo e par ");
			
		
	}else{
		printf("\nnao eh palindromo ou nao eh par");
		
	}
		
	}else{
		printf("o numero nao tem 3 digitos");
	}
		
				
		
}
	
	
	
	
	
	
	
	

