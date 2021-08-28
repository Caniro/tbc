#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);



}

unsigned char to_decimal(const char bi[])
{
	unsigned int sum = 0;
	const size_t bits = strlen(bi);
	for (size_t i = strlen(bi); i > 0; i--)
	{
		if ((*bi) == '1')
		{
			sum += (char)(pow((double)2, (double)(i - 1)));
		}
		else if ((*bi) != '0')
		{
			printf("Wrong character : %c", *bi);
			exit(1);
		}
		bi++;
	}
	return sum;
}

void print_binary(const unsigned char num)
{
	printf("Decimal\t%d\t== Binary ", num);
	for (int i = 7; i >= 0; i--)		// Don't use size_t		-> unsigned -> cannot exit!
	{
		printf("%d", (num & (char)pow(2, i)) == (char)pow(2, i) ? 1 : 0);
	}
	printf("\n");
}