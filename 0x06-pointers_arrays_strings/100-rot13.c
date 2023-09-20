#include "main.h"

/**
 *rot13 - encodes a string using rot13
 *@s: input string.
 *Return: the pointer to dest.
 */
char *rot13(char *s)
{
	int count = 0, i;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
	for (i = 0; i < 52; i++)
	{
	if (*(s + count) == a[i])
	{
	*(s + count) = b[i];
	break;
	}
	}
	count++;
	}
	return (s);
}
