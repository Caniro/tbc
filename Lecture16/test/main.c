#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header_A.h"
#include "Header_B.h"



int main()
{
#ifdef _DEBUG			// if defined (_DEBUG)
	printf("DEBUG\n");
#endif
#ifdef _WIN64
	printf("Hello, WIN64");
#elif _WIN32
	printf("Hello, WIN32");
#elif __linux__
	printf("Hello, linux");
#endif
	return 0;
}