#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char* str, int(*pf)(int));
void ToUpper(char* str);
void ToLower(char* str);
//void Transpose(char* str);

int main()
{
	char options[] = { 'u', 'l' };
	int n = sizeof(options) / sizeof(char);
	typedef void (*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower };
	printf("Enter a string\n>> ");
	char input[100] = { '\0', };
	while (scanf("%[^\n]%*c", input) != 1)
	{
		if (!input[0]) 
		{
			printf("Don't enter the \"Enter\"");
			exit(1);
		}
		printf("Please try again.\n>> ");
	}
	printf("Choose an option:\nu) to upper\nl) to lower\n");
	char option;
	scanf("%c", &option);
	for (int i = 0; i < n; ++i)
	{
		if (option == options[i])
			operations[i](input);
	}
	printf("%s", input);
	


	return 0;
}

void update_string(char* str, int(*pf)(int))
{
	(*pf)(str);
}
void ToUpper(char* str)
{
	while (*str != '\0')
	{
		*str = toupper(*(str));
		str++;
	}
}
void ToLower(char* str)
{
	while (*str != '\0')
	{
		*str = tolower(*(str));
		str++;
	}
}
//void Transpose(char* str)
//{
//
//}