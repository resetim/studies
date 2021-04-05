//Just a test
#include <stdio.h>

int main(void) {
	float a = 5.0, b = 2.0, c = 5, d = 2, e;

	//Either one of the operands is a floating-point number
	e = a/b;
	printf("a divided by b = %f \n", e);
	e = a/d;
	printf("A divided by d = %f \n", e);
	e = c/b;
	printf("C divided by b = %f \n", e);

	//Both operands are integers
	e = c/d;
	printf("C divided by d = %f \n", e);
	return 0;
}

