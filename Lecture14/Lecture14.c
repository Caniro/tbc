#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

struct person			// tag
{
	char name[MAX];		// member
	int age;
	float height;
};


int main()
{
	//int flag;
	//struct person genie;
	//strcpy(genie.name, "Will Smith");		// dot(.) is structure membership operator (member access operator, member operator)
	//genie.age = 1000;
	//flag = scanf("%f", &genie.height);
	//printf("%f\n", genie.height);
	//struct person princess = { "Naomi Scott", 18, 160.0f };
	//struct person princess2 = {
	//	"Naomi Scott",
	//	18,
	//	160.0f
	//};
	//// Designated initializers
	//struct person beauty = {
	//	.age = 19,
	//	.name = "Bell",
	//	.height = 150.0f
	//};
	//struct person* someone;
	//someone = &genie;
	//someone->age = 1001;		// Indirect member(ship) operator (or structure pointer operator)
	//printf("%s %d\n", someone->name, (*someone).age);
	//struct book
	//{
	//	char title[MAX];
	//	float price;
	//};
	//struct {
	//	char farm[MAX];
	//	float price;
	//} apple, apple2;
	//strcpy(apple.farm, "Trade Joe");
	//apple.price = 1.2f;
	//
	//typedef struct person my_person;
	//my_person p3;
	//typedef struct person person;
	//person p4;
	//typedef struct {
	//	char name[MAX];
	//	char hobby[MAX];
	//} friend;
	//friend p5;





	return 0;
}