#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
printf("AREAS DE FIGURAS GEOMETRICAS");
printf("\n");
printf("\n1 - TRIANGULO %c", 30);
printf("\n2 - QUADRADO %c", 254);
printf("\n3 - RETANGULO %c", 219);	
printf("\n4 - CIRCULO %c", 2);
printf("\n5 - LOSANGO %c", 4);	
printf("\n");	
printf("\nSELECIONE UMA OPCAO ACIMA E APERTE ENTER: ");

int selecao;
scanf("%d",&selecao);
system("cls");

if(selecao == 1)


{
	
	float base, altura, area;
	printf("INFORMA A BASE: ");
	scanf("%f",&base);
	printf("INFORMA A ALTURA: ");
	scanf("%f",&altura);
	area = base * altura / 2;
	printf("A AREA DO TRIANGULO = %f", area);
}

else if(selecao == 2){

    float lado, area;
    printf("INFORME O LADO: ");
    scanf("%f",&lado);
    area = lado * lado;
    printf("A AREA DO QUADRADO = %f", area);
} 
 else if(selecao == 3){

    float base, altura, area;
    printf("BASE: ");
    scanf("%f",&base);
    printf("ALTURA: ");
    scanf("%f",&altura);
	area = altura * base;
    printf("A AREA DO RETANGULO = %f", area);
}
    else if(selecao == 4){

    float diagonalMaior , diagonalMenor, area;
    printf("INFORME DIAGONAL MAIOR: ");
    scanf("%f",&diagonalMaior);
    printf("INFORME DIAGONAL MENOR");
    scanf("%f",&diagonalMenor);
	    area = diagonalMaior * diagonalMenor / 2;
    printf("A AREA DO LOSANGO = %f", area);
}

else if(selecao == 5){

    float raio, area;
    printf("INFORME O RAIO: ");
    scanf("%f",&raio);
    area = 3.14 * raio * raio;
    printf("A AREA DO CIRCULO = %f", area);


	}else{
		
		printf("O");
		Sleep(100);
        printf("P");
		Sleep(200);
		printf("C");
		Sleep(200);
        printf("A");
		Sleep(200);
		printf("O");
		Sleep(500);
        printf(" ");
		Sleep(200);
		printf("I");
		Sleep(100);
        printf("N");
		Sleep(200);
		printf("V");
		Sleep(100);
        printf("A");
		Sleep(200);								
		printf("L");
		Sleep(100);
        printf("I");
		Sleep(200);
		printf("D");
		Sleep(100);
        printf("A");
		Sleep(200);
		}
		
		
		
		
		
		
		
		
		
}

