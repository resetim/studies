//Working of assignment operators
#include <stdio.h>

int main(void){
	int a = 5, c;

	c = a; // c is 5
	printf("c = %d \n", c);

	c += a; // c + a
	printf("c = %d \n", c);

	c -= a; // c - a
	printf("c = %d \n", c);

	c *= a; // c * a
	printf("c = %d \n", c);

	c /= a; // c / a 
	printf("c = %d \n", c);

	c %= a; // c % a
	printf("c = %d \n", c);
	
	return 0;
}
