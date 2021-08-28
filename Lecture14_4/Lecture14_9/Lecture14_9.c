#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81

struct namect {
	char* fname;
	char* lname;
	int letters;
};

void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
void cleanup(struct namect*);
char* s_gets(char* st, int n);

int main()
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);
	
	return 0;
}

void getinfo(struct namect* person)
{
	char* buffer[SLEN] = { '\0', };
	printf("Input your first name\n>>");
	int flag = scanf("%[^\n]%*c", buffer);
	if (flag != 1)
		printf("Wrong input");
	else {
		person->fname = (char*)malloc(sizeof(char) * (strlen(buffer) + 1));		// sizeof(char) == 1
		if (person->fname != NULL)
			strcpy(person->fname, buffer);
		else
			printf("Malloc() failed");
	}
	printf("Input your last name\n>>");
	flag = scanf("%[^\n]%*c", buffer);
	if (flag != 1)
		printf("Wrong input");
	else {
		person->lname = (char*)malloc(sizeof(char) * (strlen(buffer) + 1));
		if (person->lname != NULL)
			strcpy(person->lname, buffer);
		else
			printf("Malloc() failed");
	}
}

void makeinfo(struct namect* person)
{
	person->letters = strlen(person->fname) + strlen(person->lname);
}


void showinfo(const struct namect* person)
{
	printf("Hi, %s %s. Your name has %d characters.", person->fname, person->lname, person->letters);
}

void cleanup(struct namect* person)
{
	free(person->fname);
	free(person->lname);
}