#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintInfo(char* filename)
{
	int flag = scanf("%s", filename);
	if (!flag)
	{
		printf("Please enter a file name\n");
		exit(1);
	}
}