#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

unsigned int to_decimal(const char bi[]);

int main()
{
		printf("Binary (string) to Decimal conversion\n");

		printf("%d\n", to_decimal("00000110"));
		printf("%d\n", to_decimal("00010110"));

		printf("%d\n", to_decimal("10010100"));
}

unsigned int to_decimal(const char bi[])
{
	unsigned int sum = 0;
	const size_t bits = strlen(bi);
	for (size_t i = strlen(bi); i > 0; i--)
	{
		if ((*bi) == '1')
		{
			sum += (int)(pow((double)2, (double)(i - 1)));
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