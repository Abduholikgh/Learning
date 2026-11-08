int summation(int number)
{
	int b;

	b = 0;
	while(number > 0)
	{
		b = number + b;
		number++;
	}
	return (b);
}
/*
#include <stdio.h>
int main(void)
{
	summation(12345);
	return (0);
}*/
