#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen, strcmp and more
#define PI 3.141592f
#define AI_NAME "Friday"
#include <limits.h>
#include <float.h>
#include <inttypes.h>	// intmax_t

int main()
{
	/*char fruit_name[40];
	printf("What is your favorate fruit?\n");
	scanf("%s", fruit_name);
	printf("You like %s!\n", fruit_name);*/

	/*struct MyStruct
	{
		int i;
		float f;
	};

	printf("%zu\n", sizeof(struct MyStruct));*/

	/*int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("Size of int type is %u bytes.\n", int_size1);
	printf("Size of int type is %zu bytes.\n", int_size4);
	printf("Size of float type is %zu bytes.\n", float_size);*/

	/*int int_arr[30];
	int* int_ptr = NULL;
	int_ptr = (int*)malloc(sizeof(int) * 30);

	printf("Size of array = %zu bytes\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));*/

	/*char c = 'a';
	char string[10];

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type is %zu bytes.\n", char_size);
	printf("Size of string type is %zu bytes.\n", str_size);
	*/

	/*int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);*/

	/*char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H', 'i' };
	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);*/

	/*char str3[20] = "Hello, \0World";
	printf("%s\n", str3);
	printf("%c\n",str3[10]);*/

	/*char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";
	char str5[] = "\0";
	printf("%zu %zu\n", sizeof(str1), strlen(str1));
	printf("%zu %zu\n", sizeof(str2), strlen(str2));
	printf("%zu %zu\n", sizeof(str3), strlen(str3));
	printf("%zu %zu\n", sizeof(str4), strlen(str4));
	printf("%zu %zu\n", sizeof(str5), strlen(str5));*/

	//char *str5 = (char*)malloc(sizeof(char) * 100);
	//str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o';
	//str5[5] = '\0';
	//printf("%zu %zu\n", sizeof(str5), strlen(str5)); // sizeof pointer variable is 4bytes. (?)

	//float radius, area, circum;
	//printf("I'm %s.\nPlease, input radius\n", AI_NAME);
	//scanf("%f", &radius);
	//area = PI * radius * radius;	// if define PI = 3.141592f then remove = so I can run it.
	//circum = PI * 2.0 * radius;
	//printf("Area is %f\nCircumference is %f\n", area, circum);

	/*printf("PI is %f\n", PI);
	printf("Biggest int: %d\n", INT_MAX);
	printf("One byte in this system is %d bits.\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN);*/

	// format specifier, conversion specifier
	//double d = 3.141592653589793238462643383279502884197169399375105820974944;

//	printf("%c\n", 'A');		// use '' when expressing one letter.
//	printf("%s", "I love you\n");
//	printf("Even if there's a small chance, \
//we owe this to everyone who's not in this room to try.\n");
//
//	printf("\n");
//	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);
//	printf("%u %u %u\n", 1024, -1, UINT_MAX);
//	
//	printf("\n");
//	printf("%f %f %lf\n", 3.141592f, d, d);		// l in %lf is ignored.
//	printf("%a %A\n", d, d);
//	printf("%e %E\n", d, d);
//
//	printf("\n");
//	printf("%g %g\n", 123456.789, 1234567.89);
//	printf("%G %G\n", 123456.789, 1234567.89);
//	printf("%g %g\n", 0.00012345, 0.000012345);
//	printf("%G %G\n", 0.00012345, 0.000012345);
//
//	printf("\n");
//	printf("%o\n", 9);
//	printf("%p\n", &d);		// pointer-of operator
//
//	printf("\n");
//	printf("%x %X\n", 11, 11);
//	printf("%%\n", d);		// d is ignored.
//
//	printf("\n");
//	printf("%9d\n", 12345);
//	printf("%09d\n", 12345);
//	printf("%.2f\n", 3.141592);
//	printf("%.20f %.201f\n", d, d);
//	
//	printf("\n");
//	int n_printed = printf("Counting!");
//	printf("%u\n", n_printed);
//

	//printf("%10i\n", 1234567);
	//printf("%-10i\n", 1234567);
	//printf("%+i %+i\n", 123, -123);
	//printf("% i % i\n", 123, -123);
	//printf("%X\n", 17);
	//printf("%#X\n", 17);
	//printf("%05i\n", 123);
	//printf("%*i\n", 7, 456);

	//printf("\nPrecision\n");
	//printf("%.3d\n", 1024);
	//printf("%.5d\n", 1024);
	//printf("%.3f\n", 123456.1234567);
	//printf("%.3f\n", 123456.1235);
	//printf("%10.3f\n", 123.45678);
	//printf("%010.3f\n", 123.45678);
	//printf("%.5s\n", "ABCDEFGHIJKLMN");
	//printf("%.s\n", "ABCDEFGHIJKLMN");	// assumes .0

	//printf("\nLength\n");
	//printf("%hhd %hd %d\n", 257, 257, 257);
	//printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	// running well in x64 option. (right of debug)

	//float n1 = 3.14;	// 4bytes
	//double n2 = 1.234;	// 8bytes
	//int n3 = 1024;		// 4bytes
	//printf("%f %f %d\n\n", n1, n2, n3);			
	//printf("%d %d %d\n\n", n1, n2, n3);		// printf stores arguments in stack, and in that process, float is stored as 8bytes so error exist.
	//printf("%lld %lld %d\n\n", n1, n2, n3);
	//printf("%f %d %d\n\n", n1, n2, n3);
	//printf("%f %lld %d\n\n", n1, n2, n3);

	/*int i;
	float f;
	char str[30];
	scanf("%d %f %s", &i, &f, str);		// blank means end
	printf("%d %f %s\n", i, f, str);*/
	//char c;
	//scanf("%c", &c);
	//printf("%i\n", c);		// blank is 32
	//unsigned i;
	//scanf("%i", &i);		// try negative number
	//printf("%i\n", i);
	//unsigned i2;
	//scanf("%u", &i2);		// try negative numbers.
	//printf("%u\n", i2);
	//double d = 0.0;
	//scanf("%lf", &d);		// lf for double format specifier
	//printf("%f\n", d);
	//char str[30];
	//scanf("%5s", str);		// width
	//printf("%s\n", str);
	//char i;
	//scanf("%hhd", &i);		// try large numbers.
	//printf("%i\n", i);
	//int i;
	//scanf("%i", &i);		// try '123ab'
	//printf("%i\n", i);
	//intmax_t i;
	//scanf("%ji", &i);
	//printf("%ji", i);
	//int a, b;
	//scanf("%d,%d", &a, &b);		// try blank separator only
	////scanf("%d ,%d", &a, &b);
	////scanf("%dA%d", &a, &b);
	//printf("%d %d\n", a, b);
	//int a, b;
	//char c;
	//scanf("%d%c%d", &a, &c, &b);
	//printf("%d %c %d", a, c, b);
	//int a, b;
	//int i = scanf("%d%d", &a, &b);
	//printf("%d", i);
	//int i = 123;
	//int width = 5;
	//printf("Input width : ");
	//scanf("%d", &width);
	//printf("%*d\n", width, i);
	int i;
	scanf("%*d%*d%d", &i);		// * means ignoring in scanf.
	printf("Your third input = %d", i);

	return 0;
}