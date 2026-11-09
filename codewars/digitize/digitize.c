#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>
/*
void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
    digits[0] = 6; // write your answer to the pre-allocated digits array
    *length_out = 1; // report the number of digits
}
*/
void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
	uint64_t n = 12345;
	uint8_t digits[ft_counter(n)];
	int c = 0;
	
	while(n > 0)
	{
		digits[c] = n % 10;
		printf("This is the output => %hhu\n", digits[c]);
		n = n / 10;
		c++;
	}
}

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

int main()
{
	digitize(12345,//unint8 qana qilib uzatish muammo , size_t ishlatmadim ishlatishim kerakmidi )
	return (0);
}
