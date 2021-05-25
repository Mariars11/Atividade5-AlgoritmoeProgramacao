#include <stdio.h>
#include <ctype.h>

int main(){
	char letra;
	
	printf("Informe a letra inicial do seu sexo |M| ou |F|: ");
	scanf("%c", &letra);
	letra = toupper(letra);
	
	letra == 'M'?printf("Sexo Masculino!"):printf("Sexo Feminino");
}
