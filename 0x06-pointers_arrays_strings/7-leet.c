#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *)
{
	int indx1 = 0, indx2;

	char leet[8] = {'o', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; index2++)
		{
			if (str[indx1] == leet[index2] ||
				str[indx1] - 32 == leet[index2])
				str[indx1] = index2 + '0';
		}
		indx1++;
	}
	return (str);
}

