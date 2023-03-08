#include "main.h"
/**
 * main - _puts_recursion that prints a string, followed by a new line.
 * @*s - the string to be printed
 * Return: always 0 (success)
 * On error, -1 is returned, and errno is set appropriately
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
