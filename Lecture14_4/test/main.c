#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 20

struct names
{
	char given[LEN];
	char family[LEN];
};

// Nested Structure
struct reservation
{
	struct names guest;
	struct names host;
	char food[LEN];
	char place[LEN];
	int year;
	int month;
	int day;
	int hours;
	int minutes;
};

int main()
{
	struct reservation res =
	{
		.guest = {"given","family"},
		.host = {"hostgiven","hostfamily"},
		.food = "food",
		.place = "place",
		.year = 1925,
		.month = 4,
		.day = 10,
		.hours = 18,
		.minutes = 30
	};
	printf("Dear %s %s,\n",res.guest.given, res.guest.family);
	printf("I would like to serve you %s\n", res.food);
	printf("Please visit the %s on %d/%d/%d at %d:%d\n", res.place, res.month, res.day, res.year, res.hours, res.minutes);
	printf("Sincerely,\n%s %s\n", res.host.given, res.host.family);
	return 0;
}