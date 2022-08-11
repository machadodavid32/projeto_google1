#include<stdio.h>
#include<locale.h>
int main()
{
	
int contador, i, vet[10], vetImpar[10];
setlocale(LC_ALL,"Portugese");
for(i = 0; i < 10; i++)	
	{
		printf("Digite o número: ");
		scanf("%d",&vet[i]);
		
		if(vet[i] % 2 !=0){
		

	    vetImpar[contador] = vet[i];
		contador++;
	}
	}
	
	printf("\n\t Os numeros impares são:\n ");
	for(i=0; i<contador; i++)
	{
		
		printf("\t%d,", vetImpar[i]);
		
	}
	return 0;
}
