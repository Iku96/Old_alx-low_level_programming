#include <stdio.h>
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
	putchar(*name);
	name++;
	}
	putchar('\n');
	return 0;
}
