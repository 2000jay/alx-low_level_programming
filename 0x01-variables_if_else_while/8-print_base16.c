#include <stdio.h>

/**
 * main – prints  numbers 0 to 9  and letters a to f
 *followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putcahr(i);
	}
	putchar('\n');
	return (0);
}
