#include <stdio.h>
#include <windows.h>

// informe o nome do aluno utilizando string e cadastre 20 novas em um vetor e dar a media e nome do aluno no final

int main(){	

	float notas[10],media,soma;
	char nome[10];
	int i;
	
	printf("Desempenho do aluno: ");
	
	printf("\nConsultando o aluno: ");
	printf("\n\n Informe o nome do aluno: ");
	scanf("%s",&nome);

	
	for(i=0;i<=9;i++);
	{
		
	printf("\nDigite a nota %d do aluno: ",i);
	scanf("%f",&notas[i]);
	soma = soma + notas[i];			
		
	
	}	
	
	media = soma/10;
printf("O aluno %s teve media = %f : ",nome,media);




}



