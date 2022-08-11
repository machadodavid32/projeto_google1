#include <stdio.h>
#include <windows.h>

// Escrever uma contagem de 2 em dois até 100

int main(){
	
	/// teste do inicio while () {}
	
	int cont, inicio;
	
		printf("informe um numero ate 100 ");
		scanf("%d",&inicio);
	 
	 while( inicio >= 100){
		
		printf("informe um numero ate 100 ");
		scanf("%d",&inicio);
		
	}

///teste no fim do {}while() caracteristica, o bloco de codigo dentro da estrutura será executada pelo menos uma vez

do{
	printf("informe um numero ate 100 ");
	scanf("%d",&inicio);
	
}while(inicio >=100);

/// for, estrutura de repetição onde você conhece o inicio e o fim da contagem, só serve nessas condições 

	for(cont = inicio; cont <= 101; cont = cont + 2)	{
	printf("%d ",cont);
	}


}

