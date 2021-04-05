//C program to find quotient and remainder of two integers

#include <stdio.h>

int main(void){
	int a, b, result;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);

	result = a / b; //resultado quociente
	printf("a divided by b is %d \n", result);

	result = a % b; //restante
	printf("Remain of a by b is %d \n", result);
	
	return 0;
}

