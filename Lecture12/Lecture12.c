#include <stdio.h>
#include <time.h>
#include "my_rand.h"
#include <stdlib.h>	// malloc, free


//void count()
//{
//	int ct = 0;
//	printf("count = %d %lld\n", ct, (long long)&ct);
//	ct++;
//}
//void counter_caller()
//{
//	count();
//}
//void static_count()
//{
//	static int ct = 0;	// initialized only once
//	printf("static count = %d %lld\n", ct, (long long)&ct);
//	ct++;
//}
//void static_counter_caller()
//{
//	static_count();
//}
//int func(static int i)		// Warning
//{
//}

int main()
{
	/*count();
	count();
	counter_caller();
	static_count();
	static_count();
	static_counter_caller();*/
	
	/*srand(time(0));
	for (int i = 0 ; i<10; i++)
		printf("%d\n", rand());*/
	
	/*my_srand((unsigned int)time(0));
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", my_rand()%6+1);
	}*/

	
	////	malloc() returns a void type pointer.	// Memory ALLOCation
	////	void* : generic pointer
	////	free() deallocates the memory
	//double* ptr = NULL;
	//ptr = (double*)malloc(30 * sizeof(double));		
	//if (ptr == NULL)
	//{
	//	puts("Memory allocation failed.");
	//	exit(EXIT_FAILURE);
	//}
	//printf("Before free %p\n", ptr);
	//free(ptr);		// It is the object only to be free, not the pointer of it.
	//printf("After free %p\n", ptr);
	//ptr = NULL;

	/*int n = 50000000;
	ptr = (double*)malloc(n * sizeof(double));
	if (ptr != NULL)
	{
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
		for (int i = 0; i < n; ++i)
			*(ptr + i) = (double)i;
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
	}
	free(ptr);
	ptr = NULL;*/



	return 0;
}