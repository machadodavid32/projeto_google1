#include <stdio.h>
#include <windows.h>

// informe o nome do aluno utilizando string e cadastre 20 novas em um vetor e dar a media e nome do aluno no final

int main(){

	float notas[19],media,soma;
	char nome[20];
	int i;
	
	printf("Desempenho do aluno: ");

			printf("Consultando o aluno: ");
			printf("\n\n Informe o nome%s do aluno: ");
			scanf("%s",&nome);

	
	for(i=0;i<=19;i++){
		
	

			printf("\nDigite a nota%d do aluno: ",i);
			scanf("%f",&notas[i]);
			soma = soma + notas[i];			
		
	
	}	
	
	media = soma/20;
printf("O aluno %s teve media = %f : ",nome,media);




}



