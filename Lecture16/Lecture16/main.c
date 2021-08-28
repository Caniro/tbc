#include <stdio.h>
#include <math.h>

#define XNAME(n)	x ## n			// ## combines two tokens into a single token
#define PRT_XN(n)	printf("x" #n " = %d\n", x ## n);
// Variadic Macros accept a variable number of arguments.
#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__)		// #X : change X to text

int main()
{
	int XNAME(1) = 1;
	int XNAME(2) = 2;

	PRT_XN(1);
	PRT_XN(2);


	double x = 48; 
	double y;

	y = sqrt(x);
	PRINT(1, "x = %g\n", x);
	PRINT(2, "x = %.2f, y = %.4f\n", x, y);		// printf("Message " "2" ": " "x = %.2f, y = %.4f\n", x, y)

	return 0;
}

// So many macros make debuging too difficult.