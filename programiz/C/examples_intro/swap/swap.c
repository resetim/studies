//C program to swap two numbers
#include <stdio.h>

int main(void){
	double num1, num2, temp;
	printf("Digite um numero: ");
	scanf("%lf", &num1);
	printf("Digite outro numero: ");
	scanf("%lf", &num2);

	//Assign num1 to temp
	temp = num1;

	//Assign num1 to num2
	num1 = num2;

	//Assign num2 to temp
	num2 = temp;

	printf("\nDepois da troca, primeiro numero = %.2lf\n", num1);
	printf("Depois da troca, segundo numero = %.2lf", num2);
	
	return 0;
}


	



