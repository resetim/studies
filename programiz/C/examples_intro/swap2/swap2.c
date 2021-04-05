//Swap numbers without using temporary variables

#include <stdio.h>

int main (){
	int a, b, c;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("Depois da troca, a = %d\n", a);
	printf("Depois da troca, b = %d\n", b);

	return 0;

}






