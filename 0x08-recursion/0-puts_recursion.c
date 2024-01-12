#include <stdio.h#include "main.h"

/**
  * _puts_recursion - main function
  *
  * @s: function parameter
  *
  * Return: Always 0.
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
>
void _puts_recursion(char *s)
{
	if (*s == \0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
	_puts_recursion(s+1);
	}
}
