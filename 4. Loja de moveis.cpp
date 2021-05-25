#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int pedido; 
	
	printf("Informe qual o móvel solicitado: ");
	scanf("%d", &pedido);
	
	switch(pedido){
		case 1: printf("Cadeira"); break;
		case 2: printf("Mesa de computador"); break;
		case 3: printf("Estante de livros"); break;
		case 4: printf("Mesa de Impressora"); break;
		case 5: printf("Estante de CD"); break;
		default: printf("Esse produto não existe!\n"); break;		
	}
	return 0;
}
