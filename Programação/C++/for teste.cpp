#include <stdio.h>
#include <windows.h>


/* Escreva,  um prograna  para calcular a  m�dia  de  N n�meros */

/*O primeiro quando ele come�a at� onde ele vai e como ele conta*/

int main(){
	
	int cont, inicio, fim, resultado;
	
	printf("Informe o primeiro numero = ");
	scanf("%d",&inicio);
	printf("Informe o segundo  numero = ");
	scanf("%d",&fim);
	printf("Informe o resultado = ");
    scanf("%d",&resultado);	
	
	for(cont = inicio; cont <= fim; cont = (inicio + fim) / 3)
{   printf("%d ",&cont);
} 
}
	
	
 
