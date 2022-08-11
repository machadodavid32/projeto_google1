#include <stdio.h>

int main()
{
	
	int operador;
	float preco, distancia, consumo, TotalGasto;

	printf("Informe o preco = ");
	scanf("%f",&preco);	
	printf("Informe a distancia = ");
	scanf("%f",&distancia);
	
consumo = distancia / 12 ;
printf("o consumo eh %f =", consumo);
TotalGasto = preco*consumo;
printf("o total gasto foi de %f = ", TotalGasto);
}

