#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Lecture9.h"

#define WIDTH 20
#define NAME "YuYeol Han"
#define ADDRESS "Seoul, Korea"


int main()
{
	/*printchar('*', WIDTH, 1);
	printstring(NAME);
	printstring(ADDRESS);
	printchar('*', WIDTH, 1);*/

	/*int num = 5;
	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));*/

	/*unsigned long num = 10;
	print_binary_loop(num);
	printf("\n");
	print_binary(num);*/

	//for (int count = 1; count < 13; ++count)
	//	printf("%d ", fibonacci(count));



	return 0;
}

//void printchar(char c, int count, bool print_newline)
//{
//	for (int i = 0; i < count; i++)
//		printf("%c", c);
//	if (print_newline != 0)
//		printf("\n");
//}
//
//void printstring(char str[])
//{
//	printchar(' ', (WIDTH - strlen(str)) / 2, 0);
//	printf("%s", str);
//	printchar(' ', (WIDTH - strlen(str)) / 2, 1);
//}

//long recursive_factorial(int num)
//{
//	if (num > 0)
//		return num * recursive_factorial(num - 1);	// tail(end) recursion
//	else
//		return 1;
//}

//long loop_factorial(int num)
//{
//	long facto = 1;
//	for (int i = 1; i <= num; ++i)
//	{
//		facto *= i;
//	}
//	return facto;
//}

//void print_binary_loop(unsigned long n)
//{
//	if (n >= 1)
//	{
//		print_binary_loop(n / 2);
//		printf("%u", n % 2);
//	}
//}

//void print_binary(unsigned long n)
//{
//	unsigned long str[10];
//	int j = 0;
//	for (int i = n; i >= 1; ++j)
//	{
//		str[j] = i % 2;
//		i /= 2;
//	}
//	for (; j < 10; ++j)
//	{
//		str[j] = 0;
//	}
//
//	for (int i = 9; i > 0; --i)
//		printf("%u", str[i]);
//}

//int fibonacci(int number)
//{
//	if (number == 1 || number == 2)
//		return 1;
//	else
//		return fibonacci(number - 1) + fibonacci(number - 2);	// double recursion
//}
