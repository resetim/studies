//Working of arithmetic operators

#include <stdio.h>

int main(void){
	
	int a = 9, b = 4, c;

	c = a + b;
	printf("a + b = %d\n", c);

	c = a - b;
	printf("a - b = %d\n", c);

	c = a*b;
	printf("a * b = %d\n", c);

	c = a/b;
	printf("a / b = %d\n", c);

	c = a%b;
	printf("Reimander when a divided by b = %d \n", c);
	return 0;
}



