#include <stdio.h>

/**
 * main - prints fizz for multiples of 3 and buzz for multiples of 5
 * prints fizzbuzz for multiples of 3 and 5
 * @i number 
 * Return: 0
 */

int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
