#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>	// toupper(), ispucnt(), ...
#include <stdlib.h>	// atoi(), atof(), atod(), strtol(), strtoul(), strtod(), itoa(), ftoa()

#define MESSAGE "A symbolic string constant"
#define MAXLENGTH 81
#define STRLEN 81
#define NUM_LIMIT 1024

//void custom_put(const char* str)
//{
//	while (*str != '\0')
//		putchar(*str++);
//}
//
//int custom_put2(const char* str)
//{
//	unsigned count = 0;
//	while (*str != '\0')
//	{
//		putchar(*str++);
//		count++;
//	}
//	putchar('\n');		// not "\n"
//	return count;
//}
//void fit_str(char* str, unsigned int n)
//{
//	int count=0;
//	while(count!=n)
//		count++;
//	str[count]=NULL;
//}
//void my_strcat(char str1[], char* str2)
//{
//	int n=0, m=0;
//	while(str1[n]!='\0')
//		n++;
//	while(str2[m]!='\0')
//	{
//		str1[n]=str2[m];
//		n++; 
//		m++;
//	}
//}
//void my_strcat2(char str1[], char* str2, int num)
//{
//	int n = 0, m = 0;
//	while (str1[n] != '\0')
//		n++;
//	while (m<num)
//	{
//		str1[n] = str2[m];
//		n++;
//		m++;
//	}
//}
//int my_strcmp(char* str1, char* str2)
//{
//	int judge;
//	while (*str1 != '\0' || *str2 != '\0')
//	{
//		if (*(str1)>*(str2))
//			return 1;
//		else if (*(str1)<*(str2))
//			return -1;
//		else
//			judge = 0;
//		str1++;
//		str2++;
//	}
//	return judge;
//}
//int my_strncmp(char* str1, char* str2, int num)
//{
//	int judge, count=0;
//	while ((*str1 != '\0' || *str2 != '\0')&& count<num)
//	{
//		if (*(str1) > * (str2))
//			return 1;
//		else if (*(str1) < *(str2))
//			return -1;
//		else
//			judge = 0;
//		str1++;
//		str2++;
//		count++;
//	}
//	return judge;
//}

//void my_strcpy(char* str1, char* str2)
//{
//	while (*str2 != '\0')
//	{
//		*str1++ = *str2++;
//	}
//}
//void my_strncpy(char* str1, char* str2, int num)
//{
//	int count = 0;
//	while (*str2 != '\0' && count++ < num)
//		*str1++ = *str2++;
//}

//void swap(int* xp, int* yp)
//{
//	int temp = *xp;
//	*xp = *yp;
//	*yp = temp;
//}
//void printArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//		printf("%i ", arr[i]);
//}
//void selectionSort(int arr[], int n)
//{
//	for (int j = 0; j < n-1; j++)
//	{
//		int minidx = j;
//		for (int i = j; i < n; i++)
//		{
//			if (arr[minidx] > arr[i])
//				minidx = i;
//		}
//		swap(&arr[j], &arr[minidx]);
//	}
//}

//void swap(char** xp, char** yp)
//{
//	char* temp = *xp;
//	*xp = *yp;
//	*yp = temp;
//}
//void printStringArray(char* arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//		printf("%s\n", *(arr + i));
//	printf("\n");
//}
//void selectionSort(char* arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int minidx = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (*arr[minidx] > * arr[j])
//				minidx = j;
//			else if (*arr[minidx] == *arr[j])
//			{
//				int k = 1;
//				while (*(arr[minidx] + k) != '\0' || *(arr[j] + k) != '\0')
//				{
//					if (*(arr[minidx] + k) > * (arr[j] + k))
//						minidx = j;
//					k++;
//				}
//			}
//		}
//		swap(&arr[minidx], &arr[i]);
//	}
//}
//void selectionSort_sol(char* arr[], int n)
//{
//	int i, j, min_idx;
//	for (i = 0; i < n - 1; i++)
//	{
//		min_idx = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(arr[j], arr[min_idx]) < 0)
//				min_idx = j;
//		}
//		swap(&arr[i], &arr[min_idx]);
//	}
//}

//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//int PunctCount(const char* str)
//{
//	int ct = 0;
//	while (*str)
//	{
//		if (ispunct(*str))
//			ct++;
//		str++;
//	}
//	return ct;
//}

int main()
{
	//char words[MAXLENGTH] = "A string in an array";
	//const char* pt1 = "A pointer to a string.";
	//puts("Puts() adds a newline at the end:");	// \n at the end
	//puts(MESSAGE);
	//puts(words);		// it can be removed by initializing all elements of words (0~MAXLENGTH)
	//puts(pt1);
	//words[3] = 'p';
	//puts(words);
	////pt1[8]='A';	// error

	/*char words[STRLEN]="";
	fgets(words, STRLEN, stdin);
	words[strlen(words)-1]=NULL;
	fputs(words, stdout);
	fputs("END", stdout);*/

	//char small_array[5];
	//puts("Enter long strings:");
	//printf("%p\n", small_array);
	//printf("%p\n", fgets(small_array, 5, stdin));
	//fputs(small_array, stdout);

	/*custom_put("Just ");
	custom_put("Do it!");
	printf("%d\n",custom_put2("12345"));*/

	/*char msg[] = "Just, " "do it!";
	puts(msg);
	printf("Length %d\n", strlen(msg));
	fit_str(msg,4);
	puts(msg);
	printf("Length %d\n", strlen(msg));*/

	/*char str1[100] = "First string";
	char str2[] = "Second string";
	my_strcat(str1, ",");
	my_strcat(str1,str2);
	my_strcat2(str1, str2, 2);
	puts(str1);*/

	/*printf("%d\n", my_strcmp("A", "A"));
	printf("%d\n", my_strcmp("A", "B"));
	printf("%d\n", my_strcmp("B", "A"));
	printf("%d\n", my_strcmp("Hello", "Hello"));
	printf("%d\n", my_strcmp("Banana", "Bananas"));
	printf("%d\n", my_strcmp("Bananas", "Banana"));
	printf("%d\n", my_strncmp("Bananas", "Banana", 6));*/

	/*char dest[100] = "";
	char source[] = "Start programming!";
	my_strcpy(dest, source);
	my_strncpy(dest, source, 5);
	my_strcpy(dest, source+6);
	my_strcpy(dest, source);
	my_strcpy(dest+6, "coding!");
	puts(dest);*/

	/*char str[100]= "";
	int i = 123;
	double d = 3.14;
	int n = sprintf(str, "%05d.png %f", i, d);
	puts(str);
	printf("%d", n);*/

	/*printf("%s\n", strchr("Hello, World", 'W'));
	printf("%s\n", strpbrk("Hello, World", "ABCDE"));
	printf("%s\n", strpbrk("Hello, World", "abcde"));
	printf("%s\n", strrchr("Hello, World, Hello, World", 'l'));
	printf("%s\n", strstr("Hello, World", "wor"));
	printf("%s\n", strstr("Hello, World", "Wor"));*/

	/*int arr[] = { 64,25,12,22,11, 32, 50, 50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	printArray(arr, n);*/

	/*char* arr[] = { "Cherry", "AppleBee", "Pineapple", "Apple", "Orange" };
	int n = sizeof(arr) / sizeof(arr[0]);
	printStringArray(arr, n);
	selectionSort(arr, n);
	printStringArray(arr, n);*/

	/*char* arr[] = { "Cherry", "AppleBee", "Pineapple", "Apple", "Orange" };
	printf("%p %p %p %p %p", arr, arr[0], arr[1], &arr[0], &arr[1]);*/

	/*char line[NUM_LIMIT];
	char* new_line = NULL;
	fgets(line, NUM_LIMIT, stdin);
	new_line = strchr(line, '\n');
	if (new_line)
		*new_line = '\0';
	ToUpper(line);
	puts(line);
	printf("%d\n", PunctCount(line));*/

	char str1[] = "-1024Hello";
	char* end;
	unsigned long ul = strtoul(str1, &end, 10);
	printf("%s %ld %s %d\n", str1, ul, end, (int)*end);
	char str2[] = "10FFHello";
	long l = strtol(str2, &end, 16);
	printf("%s %ld %s %d\n", str2, l, end, (int)*end);
	char temp[100];
	puts(_itoa(10, temp, 16));
	sprintf(temp, "%x", 10);
	puts(temp);


	return 0;
}