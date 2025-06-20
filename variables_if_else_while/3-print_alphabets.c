#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch++);
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch++);
	}

	putchar('\n');

	return (0);
}
