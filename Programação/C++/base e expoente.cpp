#include <stdio.h>
#include <windows.h>
#include<math.h>

/* informe a base, o expoente, calcule e informe o resultado*/

int main(){
	
	int cont, base, expoente, resultado;
	
	printf("Informe a base = ");
	scanf("%d",&base);
	printf("Informe o expoente = ");
	scanf("%d",&expoente);
	resultado = 1;
	
	for(cont = 1; cont <= expoente; cont ++){
		resultado = resultado * base;
	}
	
	printf("%d ^ %d = %d ", base, expoente, resultado);
 }
 
 
