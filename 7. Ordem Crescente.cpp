#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num[3], i, aux, troca;
	
	for (i = 0; i < 3; i++){
		printf("Informe o número %d: ", i +1);
		scanf("%d", &num[i]);
	}
	
	for(aux = 0; aux < 3; aux++){
		for(i = aux + 1; i < 3; i++){
			if(num[aux] > num[i]){
				troca = num[i];
				num[i] = num[aux];
				num[aux] = troca;
			}
		}
	}
	
	printf("Em ordem crescente: |%d| |%d| |%d|", num[0], num[1], num[2]);
	
	return 0;
}
