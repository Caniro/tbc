#include <stdio.h>

void say_hello(); // prototyping, fucntion declaration

int main(void)
{
	/*int x=1, y=2, sum;

	printf("'The truth is ... \nI am ironman.'\n");
	//escape sequence
	//print formated = printf

	sum = x + y;
	printf("The answer is %i\n", sum); //%integer
			//변수 우클릭 후 rename : 일괄 변경
			
	*/
	say_hello();
	return 0;
}

void say_hello(void)
{
	int x = 0, y = 1;
	printf("Hello World!");

	return;
}