#include <stdio.h>
/**
 * main - start point
 * Return: 0 (sucecess)
 */
int main(void)
{
	int i;

	int j;

	int k;

	for (i = 0; 1 < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
