#include<stdio.h>
/**
 * main - Short description, single line
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Returns zero
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
