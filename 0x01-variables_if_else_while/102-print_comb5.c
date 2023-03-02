#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int h, i, k, j;

	for (h = 48; h <= 57; h++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((k + j) > (h + i) &&  k >= h) || h < k)
				{
					putchar(h);
					putchar(i);
					putchar(' ');
					putchar(k);
					putchar(j);

					if (h + i + k + j == 227 && h == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

