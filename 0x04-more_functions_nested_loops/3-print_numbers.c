#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @i: take in integet
 * @void: void
 * Return: Always 0.
 **/
int print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
