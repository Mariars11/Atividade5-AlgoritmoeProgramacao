#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	
	printf("\n------------------------------- Qual das op��es abaixo voc� deseja visitar? --------------------------\n");
	printf("\n|MENU DE OP��ES|\n");
	printf("---------------------\n---------------------");
	printf("\n|1- Norte|\n|2- Nordeste|\n|3- Centro-Oeste|\n|4-Sudeste|\n|5- Sul|\n|0- Sair do programa|\n");
	printf("\nInforme: ");
	scanf("%d", &escolha);
	
	while(escolha != 0){
		system ("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		switch(escolha){
			case 1: printf("\t\t\t\t\tVoc� escolheu a op��o: Norte"); break;
			case 2: printf("\t\t\t\t\tVoc� escolheu a op��o: Nordeste"); break;
			case 3: printf("\t\t\t\t\tVoc� escolheu a op��o: Centro-Oeste"); break;
			case 4: printf("\t\t\t\t\tVoc� escolheu a op��o: Sudeste"); break;
			case 5: printf("\t\t\t\t\tVoc� escolheu a op��o: Sul"); break;
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	break;	
	}
	
	return 0;
}
