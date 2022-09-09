#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i and is", n, (n % 10));
	if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("and is greater than 5");
	}
	else
		printf("and less than six and not zero");
	return (0);
}
