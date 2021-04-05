// C program to find the size of int, float, double and char

#include <stdio.h>

int main(void){
	int a = 10;
	float b = 2.5;
	double c = 3.14;
	char d = 'H'; 

	printf("%lu bytes \n", sizeof(a));
	printf("%lu bytes \n", sizeof(b));
	printf("%lu bytes \n", sizeof(c));
	printf("%lu bytes \n", sizeof(d));
	return 0;
}
