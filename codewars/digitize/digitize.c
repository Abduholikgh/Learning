#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>

int ft_counter(uint64_t n);
int digitize (uint64_t n, uint8_t digits[ft_counter(n)], size_t *length_out);

/*
void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
    digits[0] = 6; // write your answer to the pre-allocated digits array
    *length_out = 1; // report the number of digits
}
*/

int ft_counter(uint64_t n)
{
	int i;

	i = 0;
	while(n > 0)
	{
		n = n / 10;	
		i++;
	}
	return (i);
}

int digitize (uint64_t n, uint8_t digits[ft_counter(n)], size_t *length_out)
{
	int c = 0;
	int a = *length_out;
	int arr2[a];

	while(n > 0)
	{
		arr2[c] = n % 10;
		printf("This is the output => %hhu\n", arr2[c]);
		n = n / 10;
		c++;
	}
	return(*arr2);
}

int main()
{
	int x = 19;
	uint8_t arr[] = {0,1,2,3,4,5};
	int i = 0;

	while(i < 7)
	{
		printf("Before => %d\n", arr[i]);
		i++;
	}
	digitize(12345, arr, (size_t *)&i);
	return (0);
}
