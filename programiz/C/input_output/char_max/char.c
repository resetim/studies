//Testing limits and CHAR_MAX
#include <stdio.h>

int main (void) {
	char nada [100];
	printf("Por favor, digite alguma coisa: ");
	scanf("%[^\n]%*c", nada);
	printf("%s", nada);
	return 0;
}
