#include <stdio.h>
#include <conio.h>

int main ()
{
	
	int contador, numero;
	for (contador=1;contador<=11; contador++)
	{
		printf("\n%d", contador);
		scanf("%d",&numero);
		if(numero<12)
		break;
	}
	
	printf("Foram digitados %d numeros validos", contador-1);
	getch();
}
