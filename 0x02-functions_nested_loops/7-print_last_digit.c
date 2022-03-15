#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
int last = n % 10;

if (n < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
