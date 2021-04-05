//Program to relato two integers using =, > or M symbol

#include <stdio.h>
int main() {
	int number1, number2;
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);

	//checks if the two integers are equal.
	if(number1 == number2){
		printf("The numbers %d and %d are equal", number1, number2);
	}
	
	//checks if number1 is greates than number2
	else if (number1 > number2){
		printf("Result = %d > %d", number1, number2);
	}

	//checks if both teste expressions are false
	else {
		printf("Result = %d < %d", number1, number2);
	}
	
	return 0;
}
