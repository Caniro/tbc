//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define SLEN 81
//
//struct namect {
//	char* fname;
//	char* lname;
//	int letters;
//};
//
//void getinfo(struct namect*);
//
//int main()
//{
//	struct namect person;
//
//	getinfo(&person);
//	
//	return 0;
//}
//
//void getinfo(struct namect* person)
//{
//	char* buffer[SLEN] = { '\0', };
//	printf("Input your first name\n>>");
//	scanf("%[^\n]%*c", buffer);
//	printf("%s", buffer);
//
//	person->fname = (char*)malloc(sizeof(char) * (strlen(buffer) + 1));
//	strcpy(person->fname, buffer);
//	printf("%s", person->fname);
//}
