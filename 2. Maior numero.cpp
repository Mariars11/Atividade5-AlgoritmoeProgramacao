#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num[3];
	
	for(int i = 0; i < 3; i++){
		printf("informe o número %d:\n", i + 1);
		scanf("%d", &num[i]);
	}	
	if(num[0] > num[1] && num[0] > num[2]){
		system ("cls");
		printf("O maior número é: %d", num[0]);	
	}			
		else if(num[1] > num[0] && num[1] > num[2]){
			system ("cls");
				printf("O maior número é: %d", num[1]);
		}		
			else{
				system ("cls");
				printf("O maior número é: %d", num[2]);
			} 				
	
	return 0;
}
