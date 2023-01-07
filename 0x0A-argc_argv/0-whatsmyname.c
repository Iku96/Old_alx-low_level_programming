#include <stdio.h>
#include "main.h"
/**
 * main - main function
 *
 * Returns: Always 0
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];
	while (*name)
	{
	_putchar(*name);
	name++;
	}
	_putchar('\n');
	return 0;
}
