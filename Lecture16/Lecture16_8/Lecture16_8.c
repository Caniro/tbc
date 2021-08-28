#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "DifferentFile.h"

void different_function();

int main()
{
	printf("__FILE__ : %s\n", __FILE__);
	printf("__DATE__ : %s\n", __DATE__);
	printf("__TIME__ : %s\n", __TIME__);		// build time
	printf("__LINE__ : %d\n", __LINE__);
	printf("__func__ : %s\n", __func__);

	different_function();

	different_func_in_different_file();

#line 7
	printf("__LINE__ : %d\n", __LINE__);

#line 1 "hello.txt"
	printf("__LINE__ : %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

#if defined(_WIN32) !=1
#error Not WIN32 platform
#endif


	return 0;
}

void different_function()
{
	printf("__FILE__ : %s\n", __FILE__);
	printf("__func__ : %s\n", __func__);
}