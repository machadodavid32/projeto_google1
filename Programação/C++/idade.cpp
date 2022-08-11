#include <stdio.h>

/* entre 0 e 11 anos criança
12 e 18 anos adolescente
19 e 65 anos adulto
maior que 65 anos idoso
*/

/* intervalor do if > maior que, < menor que, >= maior igual,
== igual, |= diferente, <= menor igual, && and/e/serie,  ||or/ou/paralelo*/

int main(){
	int idade;
	
	printf("informe a idade ");
	scanf("%d",&idade);
	
	if(idade >0 && idade <= 11){
		printf("crianca");}
		
		if(idade >=12 && idade  <=18){
			printf("adolescente");
		}
		
		
		if(idade >=19 && idade <=65){
			printf("adulto");
		}
        if(idade >=66 ){
			printf("idoso");
		}
		
	
}
