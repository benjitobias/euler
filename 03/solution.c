#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

#define TARGET 600851475143
//#define TARGET 13195

bool newIsPrime(uint64_t prime_candidate)
{
	uint32_t i = 0;
	float square_root = 0;
	
	if (0 == prime_candidate % 2) {
		return false;
	}

	square_root = sqrt(prime_candidate);

	for (i = 3; i < square_root; i +=2) {
		if (0 == prime_candidate % i) {
			return false;
		}
	}

	return true;
}

bool isPrime(uint64_t possible_prime)
{
	uint64_t i = 0;
	
	if (0 == possible_prime % 2) {
		return false;
	}

	for (i = 3; i < possible_prime/2; i += 2) {
		if (0 == possible_prime % i) {
			return false;
		}
	}

	return true;
}

bool isFactor(uint64_t target, uint64_t candidate)
{
	return (0 == target % candidate);
}

int main(void)
{
	uint64_t i = TARGET;
	uint64_t max_prime = 0;

	for (i = TARGET/2; i > 0; --i) {
		if (isFactor(TARGET, i)) {
			if (newIsPrime(i)) {
				max_prime = i;
				break;
			}
		}
	}

	printf("Max prime: %d\n", max_prime);

}
