#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>	// _getch(), _getche()
#include <stdlib.h>	// exit()

//void display(char c, int a, int b)
//{
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//}

//void mycount();

int main()
{
	//char c;
	//while ((c = _getche()) != EOF)	// getchar echo , End Of File
	//	putchar(c);

	//int c;
	//while ((c = getchar()) != EOF)
	//	putchar(c);

	//printf("programming");		// at cmd, Lecture8.exe > output.txt -> output.txt : redirection
		// explorer .   -> open explorer

	//char str[100];
	//scanf("%s", str);
	//printf("I love %s\n", str);		// Lecture8.exe < input.txt > output1.txt
	//	// Lecture8.exe >> output.txt  -> overwriting
	//	// copy Lecture8.exe test.exe
	//	// test.exe | Lecture8.exe	-> "I love programming"
	
	/*char ch;
	int first=0, second=0;
	while (1)
	{
		scanf("	%c %i %i", &ch, &first, &second);
		display(ch, first, second);
	}*/

	/*char c;
	int rows, cols;
	printf("Input one character and two integers.\n");
	while ((c=getchar()) != '\n')
	{
		scanf("%i %i", &rows, &cols);
		while (getchar() != '\n') continue;
		display(c, rows, cols);
		printf("Input another character and two integers.\n");
		printf("Press Enter to quit.\n");
	}*/

	/*printf("Enter the letter of your choice:\na. avengers\tb. beep\nc. count\tq. quit\n");
	char c;
	while ((c = getchar()) != 'q')	
	{
		while (getchar() != '\n')
			continue;
		switch (c)
		{
		case 'a': printf("Avengers assemble!\n"); printf("Enter the letter of your choice:\na. avengers\tb. beep\nc. count\tq. quit\n");
			break;
		case 'b': printf("\a"); printf("Enter the letter of your choice:\na. avengers\tb. beep\nc. count\tq. quit\n");
			break;
		case 'c': mycount(); printf("Enter the letter of your choice:\na. avengers\tb. beep\nc. count\tq. quit\n");
			break;		
		}	
	}*/

	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";	//TODO : scanf(...)
	file = fopen(file_name, "r");	// read only
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1);
	}

	while ((c = getc(file)) != EOF)
		putchar(c);
	fclose(file);

	return 0;
}

//void mycount()
//{
//	unsigned count = 0;
//	printf("Enter an integer:\n");
//	scanf("%u", &count);
//	for (unsigned i = 1; i <= count; i++)
//		printf("%u\n", i);
//	getchar();
//}