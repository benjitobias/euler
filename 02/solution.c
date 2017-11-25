#include <stdio.h>
#include <stdint.h>

#define MAX_NUMBER 4000000

int main(void)
{
	uint64_t current = 1;
	uint64_t previous = 1;
	uint64_t new = 0;
	uint64_t total = 0;

	while (1) {
		printf("%d\n", new);
		new = (current + previous);
		if (MAX_NUMBER >= new) {
			previous = current;
			current = new;

			if (0 == new % 2) {
				total += new;
				printf("New total: %d\n", total);
			}
		}
		else {
			break;
		}
	}

clean:
	printf("\nTotal: %d\n", total);
	return 0;
}
