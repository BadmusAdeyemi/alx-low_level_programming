#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)

{

	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9'))
			{
				putchar(',');
				putchar(' ');
			}


		}
	}
	putchar('\n');
	return (0);

}
