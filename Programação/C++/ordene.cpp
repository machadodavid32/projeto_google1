#include <stdio.h>

/*Escreva dois numeros e verifica se o segundo é maior que o primeiro
*/

/*Escreva 3 numeros e verifica qual dos dois é o maior
*/

/*Escreva 3 numeros e escreva qual dos 3 é o maior
*/

/*Escreva 3 numeros e ordene
*/


/* intervalor do if > maior que, < menor que, >= maior igual,
== igual, |= diferente, <= menor igual, && and/e/serie,  ||or/ou/paralelo*/

int main(){
	int n1, n2, n3;
	
	printf("Primeiro numero ");
	scanf("%d",&n1);

    printf("Segundo numero "); 	
	scanf("%d",&n2);
	
	printf("Terceiro Numero "); 	
	scanf("%d",&n3);
	
	if(n1 <n2 && n2 <n3){
		printf("%d,%d,%d,",n1,n2,n3 );
		printf("\nprimeiro, segundo, terceiro");}	

	if(n1 <n3 && n3 <n2){
		printf("%d,%d,%d,",n1,n2,n3 );
		printf("\nterceiro, segundo, primeiro");}		
	
	if(n2 <n1 && n1 <n3){
		printf("%d,%d,%d,",n1,n2,n3 );
		printf("\nterceiro, segundo, primeiro");}	
		
	if(n2 <n3 && n3 <n1){
		printf("%d,%d,%d,",n1,n2,n3 );
		printf("\nterceiro, segundo, primeiro");}	
		
	if(n3 <n1 && n1 <n2){
		printf("%d,%d,%d,",n1,n2,n3 );
		printf("\nterceiro, segundo, primeiro");}
		
	if(n3 <n2 && n2 <n1){
		printf("%d,%d,%d,",n1,n2,n3 );
		printf("\nterceiro, segundo, primeiro");}		
		
		/*1 2 3
		  1 3 2
		  2 1 3
		  2 3 1
		  3 1 2
		  3 2 1*/
		  
		
		return(0);
		
		
		
	}
	
	
