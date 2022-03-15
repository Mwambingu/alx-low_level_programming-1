#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: Print the alphabet in lowercase 10 times
 * followed by a new line
 * Return: 0 for success
 */


void print_alphabet_x10(void)
{

	int x, a;
	int lower_x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			lower_x = tolower(x);
			_putchar(lower_x);
		}
		_putchar('\n');
	}
}
