#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 98;
	int base = 8;
	char res[100];

	printf("Equivalent of %d in base %d is" " %s\n", num, base, fromDeci(res, base, num));

	return (0);
}
