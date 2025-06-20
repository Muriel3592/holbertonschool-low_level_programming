# include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int  main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);

	}

	putchar ('\n');

	return (0);

}
