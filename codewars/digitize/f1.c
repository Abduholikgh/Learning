#include <stdio.h>
#include <string.h>
#include <inttypes.h>

int main()
{
	uint8_t x[] = {122, 12, 90};
	size_t z = sizeof(x);
	int i = 0;

	while (i < 10)
	{
		printf("%d.%hhu\n", i+1,x[i]);
		i++;
	}
	printf("x => %zu\n", z);
	return (0);
}
