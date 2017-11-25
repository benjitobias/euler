#include <stdio.h>
#include <stdint.h>


#define MAX_NUMBER 1000
#define FIVE 5
#define THREE 3

int main(void)
{

	uint16_t i = 0;
	uint32_t sum = 0;
	
	for(i = 0; i < MAX_NUMBER; ++i)	{
		if (0 == i % FIVE || 0 == i % THREE) {
			sum += i;
		}
	}
	
	printf("Sum is: %d\n", sum);

clean:
	return 0;
}
