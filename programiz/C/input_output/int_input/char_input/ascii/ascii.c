#include <stdio.h>

int main(void) {
	char letra;
	printf("Enter a character: ");
	scanf("%c", &letra);

	//When %c is used, a character is displayed
	printf("Character = %c\n", letra);

	//When %d is used, a ASCII value is displayed
	printf("ASCII = %d", letra);
	
	return 0;
}
