#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	
	for (a = 38; a < 48; a++)
	{
		putchar(a);
		if (a != 47)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	}
	return (0);
}
