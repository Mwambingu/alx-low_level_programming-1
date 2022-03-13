#include <stdio.h>
/**
 * main - Prints lowercase and then uppercase followed by a newline
 * Return: 0 for success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;

	letter = 'A';

	while (letter <= 'Z')
	{
	   putchar(letter);
	 letter++;
	}
	putchar('\n');
return (0);
}
