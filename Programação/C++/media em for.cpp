#include <stdio.h>
#include <windows.h>

//

int main(){
	
// declarando a variavel

int numeros[5]	;
int num[3] = {1,2,3};
int soma;

// definindo posições indexidas do vetor

numeros[0] = 20;
numeros[3] = 2;
printf("%d",numeros[0]);
printf("\n%d", num[1]);

soma = numeros[3] + num [2];

printf("\na soma eh %d", soma);

}
