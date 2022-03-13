#include <stdio.h>

/**
 * main -Prints alphabet in lowercase, excluding e and q
 * Return :0 for success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == "q')
		{
			letter++;
		}

		else if (letter =='e')
		{
			letter++;
		}
		else
		{
		   putchar(letter);
	letter++;
	}
	putchar('\n')
	 return (0);
}
