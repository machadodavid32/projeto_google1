#include<stdio.h>
int main()

{

char operador;
float numero1, numero2, resultado;
printf("Informe a operacao + - * / ");
scanf("%c",&operador);
printf("Informe o primeiro numero ");
scanf("%f",&numero1);
printf("Informe o segundo numero ");
scanf("%f0",&numero2);

if(operador =='+'){
    resultado = numero1+numero2;
	printf("\n%f+%f=%f",numero1, numero2, resultado);
}
else if(operador == '-'){
	resultado = numero1-numero2;
	printf("\n%f-%f=%f",numero1, numero2, resultado);
}
else if(operador == '*'){
	resultado = numero1+numero2;
	printf("\n%f*%f=%f",numero1, numero2, resultado);
}	
else if(operador == '/'){
	resultado = numero1/numero2;
	printf("\n%f/%f=%f");
}
	else{
		printf("Operacao invalida");
	}
}
