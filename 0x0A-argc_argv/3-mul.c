#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: arguments count
 * @argv: array pointing to arguments
 * Return: 0 if correct input, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}
	int a = atoi(argv[1]), b = atoi(argv[2]);
	int result = a * b;
	printf("%d\n", result);
	return (0);
}
