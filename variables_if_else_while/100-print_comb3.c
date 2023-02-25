#include <stdio.h>
/**
 * main - Prints all possible combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int first_digit, second_digit;

		for (first_digit = 0; first_digit < 9; first_digit++)
		{	
				for (second_digit = 0; second_digit < 10; second_digit++)
				{
						if(second_digit == 0)
						{
								second_digit = first_digit + 1;
						}
						putchar(first_digit + '0');
						putchar(second_digit + '0');
						if (first_digit == 8)
						{
								break;
						}
						putchar(',');
						putchar(' ');
				}
		}
		putchar('\n');
		return (0);
}
