#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "My_Header.h"

#define LEN 30

typedef struct {
	char* name[LEN];
	int score;
} movie ;

int main()
{
	FILE* fp;
	char filename[LEN];
	//PrintInfo(filename);
	fp = fopen("movies.txt", "w");		// fp = fopen(filename, "w");
	if (fp == NULL)
	{
		puts("Error : Please enter a correct file name.");
		exit(1);
	}

	char MyBuffer[LEN];
	movie movies;
	char n = fgetc(fp);
	printf("%c items has found.\n", n);
	fgetc(fp);
	fgets(MyBuffer, LEN, fp);

	





	fclose(fp);
	return 0;
}
