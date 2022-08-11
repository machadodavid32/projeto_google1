#include <stdio.h>
#include <windows.h>

// 0

int main(){

	//string de caracter
	int id[5];
	int  quantidade[5];
	float valor[5];
	char nome[20];
	int i,consulta;
	
	printf("Cadastrando produtos: ");
	
	for(i=0;i<=4;i++){
		
			printf("\n\ninforme o nome do produto ");
			scanf("%s",&nome);
	
			printf("\nDigite o codigo do produto ");
			scanf("%d",&id[i]);
			printf("Produto = %d",id[i]);
			
			printf("\nDigite a quantidade do produto ");
			scanf("%d",&quantidade[i]);
			printf("Quantidade = %d",quantidade[i]);
			
			printf("\nDigite o valor do produto ");
			scanf("%f",&valor[i]);
			printf("valor = %f",valor[i]);
	
	}	
	
	printf("Consultando produtos: ");
	printf("\n\n Informe o codigo do produto ");
	scanf("%d",&consulta);
	
	printf("id = %d",id[consulta]);
	printf("quantidade = %d",quantidade[consulta]);
	printf("valor = %f",valor[consulta]);
	
	
}
