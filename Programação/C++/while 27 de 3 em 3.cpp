#include <stdio.h>
#include <windows.h>

int main(){
	
	int cont;
	
	cont = 0;
	
	while( cont <= 900){
		
		if(cont % 4 == 0){
	
	printf("%d ", cont);
		}
		
		cont = cont + 3;	
		
	}
}
