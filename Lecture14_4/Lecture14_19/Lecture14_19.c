#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum spectrum {red, orange, yellow, green, blue};
const char* colors[] = { "red", "orange", "yellow", "green", "blue" };

#define LEN 30

int main()
{
	char choice[LEN] = { 0, };
	enum spectrum color;
	bool color_is_found = false;

	while (1)
	{
		fgets(choice, LEN, stdin);
		if (*choice == '\n')
		{
			printf("Good bye!\n");
			break;
		}
		for (int i = 0; i < LEN; ++i)
			if (choice[i] == '\n')
				choice[i] = '\0';
		if (!strcmp(choice, colors[0]))
			printf("Red roses\n");
		else if (!strcmp(choice, colors[1]))
			printf("Orange\n");
		else if (!strcmp(choice, colors[2]))
			printf("Yellow monkey\n");
		else if (!strcmp(choice, colors[3]))
			printf("Green apartment\n");
		else if (!strcmp(choice, colors[4]))
			printf("Love is blue\n");
		else
			printf("Please input another choice\n");
	}
	
	return 0;
}

////solution
//puts("Input a color name");
//if (scanf("%[^\n]%*c", choice) != 1)
//	break;
//for (color = red; color <= blue; color++)
//{
//	if (strcmp(choice, colors[color]) == 0)
//	{
//		color_is_found = true;
//		break;
//	}
//	if (color_is_found)
//		switch (color)
//		{
//		case red:
//			puts("Red roses");
//			break;
//		case orange:
//			puts("orange");
//			break;
//		case yellow:
//			puts("yellow");
//			break;
//		case green:
//			puts("green");
//			break;
//		case blue:
//			puts("blue");
//			break;
//		}
//	else
//		printf("Please try another color\n");
//	color_is_found = false;
//}
//puts("Goodbye!");

