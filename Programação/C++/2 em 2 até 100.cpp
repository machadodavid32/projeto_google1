#include <stdio.h>
#include <windows.h>

// Escrever uma contagem de 2 em dois at� 100

int main(){
	
	/// teste do inicio while () {}
	
	int cont, inicio;
	
		printf("informe um numero ate 100 ");
		scanf("%d",&inicio);
	 
	 while( inicio >= 100){
		
		printf("informe um numero ate 100 ");
		scanf("%d",&inicio);
		
	}

///teste no fim do {}while() caracteristica, o bloco de codigo dentro da estrutura ser� executada pelo menos uma vez

do{
	printf("informe um numero ate 100 ");
	scanf("%d",&inicio);
	
}while(inicio >=100);

/// for, estrutura de repeti��o onde voc� conhece o inicio e o fim da contagem, s� serve nessas condi��es 

	for(cont = inicio; cont <= 101; cont = cont + 2)	{
	printf("%d ",cont);
	}


}

