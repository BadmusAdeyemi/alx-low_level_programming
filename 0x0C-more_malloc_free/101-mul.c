#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int mul(int argc, int argv)
{
	int a;
	int b;
	int x;

	if(argc != 2)
	{
		printf("Error\n");
		exit(98);
	}
	x = a * b;
	return (x);
}

int multiple(int num1, int num2)
{
	int multy;

	if ((num1 >= '0' && num1 <= '9') || (num2 >= '0' && num2 <= '9'))
	{
		multy = mul(num1, num2);
		return (multy);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}

int main(int i, int j)
{
	int k;

	k = multiple(i, j);
	return (k);
}
