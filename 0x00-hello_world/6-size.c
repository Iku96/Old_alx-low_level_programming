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
        int char_type;
	int integer_type;
	int long_type;
	int long_long_int_type;
	int float_type;

	/**
	 * printf funtion to print the sizes of ints
	 */
	printf("Size of a char: %d byte(s)\n", sizeof(char_type));
	printf("Size of an int: %d byte(s)\n", sizeof(integer_type));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_type));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_int_type));
	printf("Size of a float: %d byte(s)\n", sizeof(float_type));

	return (0);
}
