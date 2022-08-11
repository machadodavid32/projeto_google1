#include <stdio.h>

int main()
{
	
	int operador;
	float altura, peso, imc;

	printf("Informe a altura = ");
	scanf("%f",&altura);	
	printf("Informe o peso = ");
	scanf("%f",&peso);
imc = peso / (altura*altura);

	
	if (imc < 20) {
		
		printf("abaixo do normal");
		
	}
	else if ( imc >= 20 && imc < 25){
		printf("normal");}
		
	else if (imc >= 25 && imc < 30 ){
		printf("obesidade leve");
	}	
	else if (imc >= 30 && imc < 40)	{
		printf("obesidade moderada");
	}
	else if (imc > 43 ){

	printf("obesidade morbida");
		
		}}
