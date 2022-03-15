#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: Print the alphabet in lowercase 10 times
 * followed by a new line
 * Return: 0 for success
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
