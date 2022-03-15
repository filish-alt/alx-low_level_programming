#include "main.h"
/**
 * _sign - check sign of number
 * @n: teak number
 * Return: return 1 if postive number,0 if zero,and -1 if negative number
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else (n < 0)
{
_putchar('-');
return (-1);
}
}
