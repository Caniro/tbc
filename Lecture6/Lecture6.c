#include <stdio.h>
#define NUMBER_OF_ADD 10

int main()
{
	//for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
	//	printf("%d %d\n", n, nsqr);
	//int i = 1, j;
	//i++, j = i;	// comma is also sequence point
	//printf("%d %d\n", i, j);
	//int x, y, z;
	//z = ((x = 1), (y = 2));	// final value of comma...
	//printf("%d", z);

	/*int speed = 1, i;
	float dt = 1.0, dist = 1.0, time = 1.0;
	for ( i=0;  ; i++ )
	{
		dt /= 2.0;
		dist += dt * speed;
		time += dt;
		printf("time : %f, distance : %f\n", time , dist);
	}*/

	/*const int a = 337;
	int b = 0;
	do 
	{
		printf("Enter secret code : ");
		scanf("%i", &b);
	}
	while (b != a);
	printf("Good!");*/

	//char m, l;
	//int n = 0;
	//printf("First alphabet : ");
	//scanf(" %c", &m);		// space to remove buffer '\n'		or also I can getchar()
	//printf("Last alphabet : ");
	//scanf(" %c", &l);
	//printf("iteration number : ");
	//scanf("%i", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	for (char j = m; j <= l; j++)
	//	{
	//		printf("%c ",j);
	//	}
	//	printf("\n");
	//}

	/*int count;
	for (int i = 1; i <= 10; i++)
	{
		count = 0;
		for (; count < i; count++)
			printf("%c ", 'A' + count);
		printf("\n");
	}*/
		
	/*for (int i = 12; i > 0; i--)
	{
		for (int count = i; count > 0; count--)
			printf("%c ", 'A' + 12 - count);
		printf("\n");
	}*/

	int addnum[NUMBER_OF_ADD];
	int sum = 0;
	printf("Enter %d numbers : ", NUMBER_OF_ADD);
	for (int i = 0; i < NUMBER_OF_ADD; i++)
	{
		scanf("%i", &addnum[i]);
	}
	for (int i=0; i< NUMBER_OF_ADD;i++)
		sum += addnum[i];
	printf("The sum is %i", sum);

	return 0;
}