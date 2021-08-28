//#define _CRT_SECURE_NO_WARNINGS // To use scanf (also can be included by properties.)

#include <stdio.h>
#include <limits.h> // MAX, MIN value
#include <stdlib.h>
#include <stdint.h> // also included in inttypes.h
#include <inttypes.h>
#include <stdbool.h>	// this allow to use bool
#include <complex.h>	// complex number but not be used well


int main(void)
{
	//// const int a = 1; // symbolic constant and literal constant
	// Sum of two input numbers
	//int a = 0, b = 0;

	//scanf("%i %i", &a,&b); // & : ampersand

	//
	//printf("%i + %i = %i", a, b, a+b);

	// Convert from Korean won to USD
	/*float a = 0;
	printf("Input your money:\n");
	scanf("%f", &a);
	printf("Your money in USD is %f\n", a / 1145);*/

	
	/*int b = 0b10000000000000000000000000000000;
	printf("%i %i\n", b, sizeof(b));
	unsigned int u_max = UINT_MAX;
	printf("%u %u", u_max, sizeof(u_max));
	*/
	/*unsigned int u_max = UINT_MAX +1;
	
	char buffer[33];
	_itoa(u_max, buffer, 2);

	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);
	*/

	//char c = 65;
	//short s = 200;
	//unsigned int ui = 3000000000U; // 3'000'000'000U could be used in cpp
	//long l = 65537L;
	//long long ll = 12345678908642LL; // 12'345'678'908'642ll
	//
	//printf("char = %hhd, %d, %c\n", c, c, c);
	//printf("short = %hhd, %hd, %d\n", s, s, s);
	//printf("unsigned int = %u, %d\n", ui, ui);
	//printf("long = %ld, %hd \n", l, l);
	//printf("long long = %lld, %ld\n", ll, ll);
	//printf("%o %x %#o %#x",ll,ll,ll, ll);

	//int i;
	//int32_t i32;		// 32 bit integer
	//int_least8_t i8;	// smallest 8 bit
	//int_fast8_t f8;		// fastest minimum
	//intmax_t imax;		// biggest signed integer
	//uintmax_t uimax;	// biggest unsigned integer

	//i32 = 1004;

	//printf("me32 = %d\n", i32);
	//printf("me32 = %" "d" "\n", i32);
	//printf("me32 = %" PRId32 "\n", i32);

	/*char c = 'a';
	char d = 65;
	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);
	printf("%c \n", c + 1);*/

	/*char a = '\a';
	printf("%c", a);
	printf("\7");
	printf("\07");
	printf("\0x7");*/

	/*float salary;
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);*/

	/*printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");

	printf("\\ \'Ha+\' \"Hello\" \?\n");*/

	/*printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long double));*/

	//float f = 123.456f;
	//double d = 123.456;

	//float f2 = 123.456;	// warning because of truncation
	//double d2 = 123.456f;

	//int i = 3;
	//float f3 = 3.f;
	//double d3 = 3.;

	//float f4 = 1.234e10f;

	//float f5 = 0xb.aP1;		// (b+a/16)*2^1	// P is 2^
	//double d5 = 1.0625e0;

	//printf("%f %F %e %E\n", f, f, f, f);
	//printf("%f %F %e %E\n", d, d, d, d);
	//printf("%a %A\n", f5, f5);
	//printf("%a %A\n", d5, d5);

	/*_Bool b1;
	bool b2;*/



	return 0;
}