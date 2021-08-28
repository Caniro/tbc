#include <stdio.h>

#define MONTHS 12
#define YEARS 3

//void yearindex();

int main()
{
	/*int arr[4] = { 2,5,11,18 };
	printf("%d", sizeof(arr));*/

	/*int days[MONTHS] = { 1, 123,[4] = 4, 5, 6,[1] = 1, 2 };
	for (int i = 0; i < MONTHS; ++i)
		printf("%d ", days[i]);*/

	/*double* arr[10];
	double* ptr = &arr[3] - &arr[1];
	printf("%p %p %p\n", &arr[1], &arr[3], ptr);
	ptr++;
	printf("%p %p %p", &arr[1], &arr[3], ptr);*/

	/*int arr[10];
	const int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; ++i)
		arr[i] = (i + 1) * 100;
	double* ptr = arr;
	printf("%p %p %p\n", ptr, arr, &arr[0]);
	ptr += 2;
	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);*/

	//int arr[2][3] = { {1,2,3}, {4,5,6} };
	//printf("%d %p\n", sizeof(arr[0]), arr[0]);		// arr[2] is a pointer
	
	/*double year2016[MONTHS] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6 ,26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
	double year2017[MONTHS] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
	double year2018[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };
	double years[YEARS][MONTHS];
	for (int j = 0; j < MONTHS; ++j)
	{
		years[0][j] = year2016[j];
		years[1][j] = year2017[j];
		years[2][j] = year2018[j];
	}
	printf("[Temperature Data]\n");
	yearindex();
	for (int i = 0; i < YEARS; ++i)
	{
		printf("Year %d\t:\t",i);
		for (int j = 0; j < MONTHS; ++j)
			printf("%.1lf\t", years[i][j]);
		printf("\n");
	}
	printf("\n[Yearly average temperatures of 3 years]\n");
	double avg[3] = {0,0,0};
	for (int j = 0; j < MONTHS; ++j)
	{
		avg[0] += year2016[j];
		avg[1] += year2017[j];
		avg[2] += year2018[j];
	}
	for (int i = 0; i < YEARS; ++i)
	{
		avg[i] /= MONTHS;
		printf("Year %d : average temperature = %.1lf\n", i, avg[i]);
	}
	printf("\n[Monthly average temperatures for 3 years]\n");
	yearindex();
	printf("Avg temps  :\t");
	for (int j = 0; j < MONTHS; ++j)
	{
		double avgmonth = 0;
		for (int i = 0; i < YEARS; ++i)
		{
			avgmonth += years[i][j];
		}
		printf("%.1lf\t", avgmonth / YEARS);
	}*/

	//int a = 0, b = 1;
	//double c = 2.0, d = 3.0;
	//printf("%i %i %lf %lf\n", a, b, c, d);
	//printf("%p %p %p %p\n", &a, &b, &c, &d);
	//printf("%d %d %d %d\n", &a, &b, &c, &d);
	//printf("%p %p %p", &a - &b, &a - &c, &c - &d);
	//printf("%td %td %td", &a - &b, &a - &c, &c - &d);

	//int arr0[3] = { 1,2,3 };
	//int arr1[3] = { 4,5,6 };
	//int* parr[2] = { arr0, arr1 };
	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		printf("%d(==%d, %d )", parr[j][i], *(parr[j] + i), *(*(parr+j)+i));
	//	printf("\n");
	//}

	/*char* name[] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie" };
	const int n = sizeof(name) / sizeof(char*);
	for (int i = 0; i < n; ++i)
		printf("%s at %u\n", name[i], (unsigned)name[i]);
	printf("\n");
	char aname[][15] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie", "Jafar" };
	const int an = sizeof(aname) / sizeof(char[15]);
	for (int i=0; i<an ; ++i)
		printf("%s at %u\n", aname[i], (unsigned)& aname[i]);
	printf("\n");*/
	
	/*char str[] = "Hello, World!";
	printf("%s", str);*/
	
	//int arr[2][3]={{1,2,3},{4,5,6}};
	//printf("%p %p", arr[0], &arr[0]);	// arr == arr[0] == &arr[0] == &arr[0][0]

	/*float arr2d[2][4] = {{1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f}};
	printf("%u\n", (unsigned)arr2d);
	printf("%u\n", (unsigned)arr2d[0]);
	printf("\n");
	printf("%u\n", (unsigned)*arr2d);
	printf("%u\n", (unsigned)&arr2d[0]);
	printf("%u\n", (unsigned)&arr2d[0][0]);
	printf("%f %f\n", arr2d[0][0], **arr2d);
	printf("\n");
	printf("%u\n", (unsigned)(arr2d+1));
	printf("%u\n", (unsigned)&arr2d[1]);
	printf("%u\n", (unsigned)arr2d[1]);
	printf("%u\n", (unsigned)*(arr2d+1));
	printf("%u\n", (unsigned)(&arr2d[0]+1));
	printf("%u\n", (unsigned)&arr2d[1][0]);
	printf("\n");
	printf("%f\n", *(*(arr2d+1)+2));
	printf("\n");
	for (int j = 0; j < 2; ++j)
	{
		printf("[%d] = %u, %u\n", j, (unsigned)(arr2d[j]), (unsigned)*(arr2d+j));
		for (int i = 0; i < 4; ++i)
		{
			printf("[%d][%d] = %f, %f\n", j, i, arr2d[j][i], *(*(arr2d+j)+i));
			*(*(arr2d+j)+i) += 1.0f; 
		}
	}
	printf("\n");*/

	//float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };
	//float (*pa)[4];	// a SINGLE pointer to an array of 4 floats
	//float* ap[2];	// an array of TWO pointers-to-float
	//pa=arr2d;
	//ap[0]=arr2d[0];
	//ap[1]=arr2d[1];
	//printf("%zu\n", sizeof(pa));
	//printf("%zu\n", sizeof(ap));
	//printf("\n");
	//pa = arr2d;
	//printf("%u %u\n", (unsigned)pa, (unsigned)(pa+1));
	//printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	//printf("%u %u\n", (unsigned)pa[0], (unsigned)(pa[0]+1));
	//printf("%f\n", pa[0][0]);
	//printf("%f\n", *pa[0]);
	//printf("%f\n", **pa);
	//printf("%f\n", pa[1][3]);
	//printf("%f\n", *(*(pa+1)+3));
	//printf("\n");
	//printf("%u %u\n", (unsigned)ap, (unsigned)(ap+1));		// pointer of new array of pointers
	//printf("%u %u\n", (unsigned)arr2d[0], (unsigned)(arr2d[1]));
	//printf("%u %u\n", (unsigned)ap[0], (unsigned)(ap[0] + 1));
	//printf("%f\n", ap[0][0]);
	//printf("%f\n", *ap[0]);
	//printf("%f\n", **ap);
	//printf("%f\n", ap[1][3]);
	//printf("%f\n", *(*(ap+1)+3));



	return 0;
}

//void yearindex()
//{
//	printf("Year index :\t");
//	for (int i = 1; i <= MONTHS; ++i)
//		printf("%d\t", i);
//	printf("\n");
//}