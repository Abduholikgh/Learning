#include <stdbool.h>
#include <stdio.h>

int main()
{
	int myAge;

	printf("Please put your age => ");
	scanf("%d", &myAge);
	if (myAge >= 18 && myAge <= 120)
		printf("Welcome, you are eligible to vote!");
	else
		printf("Unfortunetly, you are not eligible to vote.");
	return (0);
}
