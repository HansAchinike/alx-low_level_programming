#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
return (0);
}
