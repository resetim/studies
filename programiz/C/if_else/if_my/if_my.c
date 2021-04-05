//Testing if and else statements

#include <stdio.h>

int main (){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	//if statement
	if (number > 5) {
		printf("Number is equal to %d\n", number);
	}
	else {
		printf("Number is less than 5, try again");
	}
	return 0;
}
