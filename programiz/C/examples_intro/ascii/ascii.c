// C program to find ASCII value of character entered by the user

#include <stdio.h>

int main(void){
	unsigned char nada;
	printf("Digite uma palavra: ");
	scanf("%c", &nada);
	printf("Palavra digitada: %c \n", nada);
	printf("Tipo ASCII da palavra %d \n", nada);
	return 0;
}
