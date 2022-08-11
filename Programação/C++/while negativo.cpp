#include <stdio.h>
#include <windows.h>
/* enquanto estrutura basica do contator
cont -- decremento em 1 equivalente a cont = cant - 1
cont ++ encremento em 1 equivalente a cont = cont + 1

 */

int main() {
	
	int cont;
	
	cont = 15;
	
	while( cont > 0){
		
		printf("%d ",cont);
		Sleep(1000);
		cont--;
		
	}
	printf("se fudeu booom");
	
}
