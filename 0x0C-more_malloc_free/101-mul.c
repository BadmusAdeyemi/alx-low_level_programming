#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 98 if two arguments not given
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if  ((atoi(argv[1]) >= '0' && atoi(argv[1]) <= '9') || (atoi(argv[2]) >= '0' && atoi(argv[2]) <= '9'))
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
}
