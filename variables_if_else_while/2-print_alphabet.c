# include <stdio.h>

/**

 * main - Entry point of the program

 *

 * Description: prints the alphabet in lowercase, followed by a new line

 *

 * Return: Always 0 (Success)

 **/

int  main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		putchar(ch++);

	}

	putchar ('\n');

	return (0);

}
