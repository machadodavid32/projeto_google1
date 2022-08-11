#include <stdio.h>
#include <windows.h>


/* informe o inicio da contagem, informe o fim da contagem e conte de 2 em 2*/

/*O primeiro quando ele começa até onde ele vai e como ele conta*/

int main(){
	
	int cont, inicio, fim, incremento;
	
	printf("Informe o inicio da contagem = ");
	scanf("%d",&inicio);
	printf("Informe o fim da contagem = ");
	scanf("%d",&fim);
	printf("Informe o incremento = ");
	scanf("%d",&incremento);
	
	for(cont = inicio; cont <= fim; cont = cont + incremento){
	
	printf("%d ",cont);
	}
	
	
 }
 
