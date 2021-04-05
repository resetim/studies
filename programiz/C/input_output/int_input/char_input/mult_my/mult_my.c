#include <stdio.h>

//just a test
int main (void){
	int a;
	float b;
	double c;
	char d;

	printf("Enter a integer, float, double float and then a character: ");
	scanf("%d%f%lf%c", &a, &b, &c, &d);

	printf("You entered %d, %f, %lf and %c", a, b, c, d);
	
	return 0;
}
