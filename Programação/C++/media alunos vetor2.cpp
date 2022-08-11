#include <stdio.h>
#include <windows.h>

// informe o nome do aluno utilizando string e cadastre 20 novas em um vetor e dar a media e nome do aluno no final

int main()	{
	
	//definir as variaveis notas, com 20, media e soma
	float notas[20],media,soma;
	//definir a variavel nome com 20 em string
	char nome[20];
	//definir a variavel "i" como inteiro
	int i;
	
	//definir um titulo para o programa
	printf("Desempenho do aluno ");
	
	//registrando o nome do aluno
	printf("\nConsultando o aluno");
	printf("\nInforme o nome do aluno ");
	scanf("%s",&nome); //aqui associamos ao "char" com %s e a variavel "nome" com ,nome
	
	//agora vamos associar o vetor for
	
	for(i=0;i<=19;i++); { //aqui "{" significa que estamos abrindo um programa dentro do outro para completar 
	
	printf("\nDigite a nota %d do aluno ",i); // aqui associamos a frase a numeros inteiro e a variavel "i"
	scanf("%f",&notas[i]); //associamos para numeros reais e a variavel "notas" com vetor em "i"
	soma = soma + notas[i];
	
}

    media = soma/20;
    printf("\nO Aluno %s teve media = %f ",nome,media);
	
	
	
	
	
	
	  }
	
	
	
