#include "main.h"

/**
 * reVal - convert num to char
 * @num: number to e converted
 * Return: char
 */

char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return ((char) (num + '0'));
	else
		return ((char) (num - 10 + 'A'));
}

/**
 * strev - reverse a string
 * @str: string to be reversed
 * Return nothing
 */

void strev(char *str)
{
	int len, len1, i;
	char temp;

	len = 0;
	len1 = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len1];
		str[len1--] = temp;
	}
}

/**
 * fromDeci- convert number to string
 * @num: number to convert
 * @base:base to convet number to
 * @res:string to be converted
 * Return: res
 */

char *fromDeci(char res[], int base, int num)
{
	int i = 0;

	while (num > 0)
	{
		res[i++] = reVal(num % base);
		num /= base;
	}

	res[i] = '\0';

	strev(res);

	return (res);

}
