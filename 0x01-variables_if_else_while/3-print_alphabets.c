#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
