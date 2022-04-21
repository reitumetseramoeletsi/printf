#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
  * print_number - print an integer
  *
  * @list: list of arguments
  *
  * Return: character count
  */

int print_number(va_list list)
{
	int x, y = 0, size = 0;

	x = va_arg(list, int);

	if (x < 0)
	{
		_putchar('-');
		y++;
	}
	size = print_nums(x);
	return (y + size + 1);
}

/**
  * print_unumber - print an unsigned integer
  *
  * @list: list of arguments
  *
  * Return: character count
  */

int print_unumber(va_list list)
{
	int y = 0, size = 0;
	unsigned int x;

	x = va_arg(list, unsigned int);

	size = print_unums(x);
	return (y + size + 1);
}

/**
  * print_nums - recursion for print_number function
  *
  * @x: parameter
  * Return: byte size
  */

int print_nums(int x)
{
	int y = 0, j;

	if (x / 10)
	{
		y += print_nums(x / 10) + 1;
	}
	if (x < 0)
	{
		j = x % 10;
		_putchar(-j + '0');
	}
	else
	{
		j = x % 10;
		_putchar(j + '0');
	}
	return (y);
}

/**
  * print_unums - recursion for print_number function
  *
  * @x: parameter
  * Return: byte size
  */

int print_unums(unsigned int x)
{
	int y = 0, j;

	if (x / 10)
	{
		y += print_nums(x / 10) + 1;
	}
	
	j = x % 10;
	_putchar(j + '0');

	return (y);
}
