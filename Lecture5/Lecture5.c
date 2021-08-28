#include <stdio.h>

int main()
{
	//printf("%d\n", 1 + 2);
	//int income, salary, bonus;
	//income = salary = bonus = 100;		// triple assignment
	//salary = 100;
	//bonus = 30;
	//income = salary + bonus; 
	//int takehome, tax=20; 
	//takehome = income - tax;
	//int a, b;
	//a = -7;
	//b = -a;
	//b = +a;		// + does nothing
	
	/*float sdmoney = 0, tgmoney = 0, money = 0, interest = 0;
	int year = 0;
	printf("Input seed money : ");
	scanf("%f", &sdmoney);
	money = sdmoney;
	printf("Input target money : ");
	scanf("%f", &tgmoney);
	printf("Input annual interest (%%) : ");
	scanf("%f", &interest);
	while (money < tgmoney)
	{
		money = money * (1 + interest / 100);
		printf("%f\n", money);
		year++;
	}
	printf("It takes %i years\n", year);*/

	int sec = 0;
label:
	printf("Input seconds : ");
	scanf("%i", &sec);
	if (sec < 0)
		goto end;	
	printf("%i hours, %i minutes, %i seconds\nGood bye\n", sec/3600, (sec%3600)/60, sec%60);
	goto label;
end:
	return 0;
}