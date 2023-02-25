#include <stdio.h>
/**
 * main - Prints all possible combinations of tre digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int first_digit, second_digit, third_digit;

		for (first_digit = 0; first_digit < 8; first_digit++)
		{	
				for (second_digit = 0; second_digit < 9; second_digit++)
				{
						for (third_digit = 0; third_digit < 10; third_digit++)
						{
								if(second_digit == 0)
								{
										second_digit = first_digit + 1;
								}
								if (third_digit ==0)
								{
										third_digit = second_digit + 1;
								}
								putchar(first_digit + '0');
								putchar(second_digit + '0');
								putchar(third_digit + '0');
								if (first_digit == 7)
								{
										break;
								}
								putchar(',');
								putchar(' ');
						}
				}
		}
		putchar('\n');
		return (0);
}
