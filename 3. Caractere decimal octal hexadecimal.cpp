#include <stdio.h>

int main(){
	char letra;
	
	printf("informe um caracter: ");
	scanf("%c", &letra);
	
	printf("Caractere: %c\nDecimal: %i\nOctal: %o\nHexadecimal: %x", letra, letra, letra, letra);
	
	
	return 0;
}
