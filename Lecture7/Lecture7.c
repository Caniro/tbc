#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <float.h>


#define BASE1 12000000.0
#define BASE2 46000000.0
#define BASE3 88000000.0
#define BASE4 150000000.0
#define BASE5 300000000.0
#define BASE6 500000000.0

#define RATE1 (6.0/100.0)
#define RATE2 (15.0/100.0)
#define RATE3 (24.0/100.0)
#define RATE4 (35.0/100.0)
#define RATE5 (38.0/100.0)
#define RATE6 (40.0/100.0)
#define RATE7 (42.0/100.0)

#define BASIC_DEDUCTION 1500000.0

int main()
{
	/*int a;
	printf("Input a positive integer : ");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("even number");
	else
		printf("odd number");*/

	/*char ch = getchar();
	while (ch != '\n')
	{
		putchar(ch);
		ch = getchar();
	}
	putchar(ch);*/
	
	/*char ch;
	while ((ch= getchar()) != '\n')
	{
		putchar(ch);
	}*/

	//char ch;
	//while ((ch = getchar()) != '\n')
	//{
	//	if ((ch == 'f') || (ch == 'F'))
	//		ch = 'x';
	//	putchar(ch);
	//}

	//char ch;
	//while ((ch = getchar()) != '\n')
	//{
	//	if ((ch >= '0') && (ch <= '9'))
	//		ch = '*';
	//	putchar(ch);
	//}

	/*char ch;
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z'))
			ch -= 32;
		putchar(ch);
	}*/

	/*char ch;
	while ((ch = getchar()) != '\n')
	{	
		if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);
		putchar(ch);
	}*/

	/*float money, tax=0;
	scanf("%f", &money);
	money -= BASIC_DEDUCTION;
	if (money <= BASE1)
		tax += money * RATE1;
	else if (money <= BASE2)
		tax += BASE1 * RATE1 + (money - BASE1) * RATE2;
	else if (money <= BASE3)
		tax += BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (money - BASE2) * RATE3;
	else if (money <= BASE4)
		tax += BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (money - BASE3) * RATE4;
	else if (money <= BASE5)
		tax += BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (money - BASE4) * RATE5;
	else if (money <= BASE6)
		tax += BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (BASE5 - BASE4) * RATE5 + (money - BASE5) * RATE6;
	else
		tax += BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (BASE5 - BASE4) * RATE5 + (BASE6 - BASE5) * RATE6 + (money - BASE6) * RATE7;
	printf("Tax is = %f\n", tax);
	printf("Your income after tax deduction = %f", money-tax);*/

	//unsigned num = 0;
	//bool isPrime=true;
	//int cnt = 1;
	//scanf("%u", &num);
	//while (++cnt < num)
	//{
	//	if (num % cnt == 0)
	//		isPrime = false;
	//}
	//if (isPrime)
	//	printf("%u is a prime number.\n", num);
	//else
	//	printf("%u is not a prime number.\n", num);

	/*int num, testnum = 0;
	scanf("%i", &num);
	while (testnum++ < num)
	{
		if (num % testnum == 0)
			printf("%i ",testnum);
	}*/

	//// && and  || are sequence points.
	//int temp = (1 + 2) * (3 + 4);
	//printf("Before : %i\n", temp);
	//if (temp == 0 && (++temp == 1024));	// Short-circuit Evaluation
	//printf("After : %i", temp);

	/*printf("Enter text :\n");
	char ch;
	int countchar = 0, countword = 1, countline = 1;
	while ((ch = getchar()) != '.')
	{
		if (ch != ' ' && ch != '\n')
			countchar++;
		else if (ch == '\n')
			countline++;
		else
			countword++;
	}
	printf("Characters = %i, Words = %i, Lines = %i", countchar, countword, countline);*/

	/*int count = 0;
	int c;
	while (count < 5)
	{
		c = getchar();
		if (c == 'a')
			continue;
		putchar(c);
		count++;
	}*/

	/*for (int count = 0; count < 10; ++count)
	{
		int c = getchar();
		if (c == 'a')
			continue;
		putchar(c);
	}*/

	/*while (1)
	{
		int c = getchar();
		if (c == '.')
			break;
		putchar(c);
	}*/

	/*float min, max, ave, num, sum;
	int count = 1;
	scanf("%f", &num);
	min = max = ave = sum = num;
	while (scanf("%f", &num)==1)
	{
		if (num < min)
			min = num;
		if (num > max)
			max = num;
		count++;
		sum += num;
		ave = sum / count;
	}
	printf("min = %f, max = %f, ave = %f", min, max, ave);*/

	/*float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input;
	int n = 0;
	while ((scanf("%f", &input) == 1))
	{
		if ((input <0 || input > 100))
			continue;
		max = input > max ? input : max;
		min = input < min ? input : min;
		sum += input;
		n++;
	}
	if (n > 0)
		printf("min = %f, max = %f, ave = %f", min, max, sum / n);
	else
		printf("No inputs.\n");*/

		//char c;
		//while ((c = getchar()) != '.')
		//{
		//	printf("You love ");
		//	switch (c)
		//	{
		//	case 'a':
		//	case 'A':
		//		printf("apple");
		//		break;
		//	case 'b':
		//	case 'B':
		//		printf("banana");
		//		break;
		//	case 'c':
		//	case 'C':
		//		printf("cake");
		//		break;
		//	default:
		//		printf("nothing");
		//	}
		//	printf(".\n");
		//	while ((c = getchar()) != '\n')
		//		continue;			// repeat this iteration until line changing
		//}

	return 0;
}