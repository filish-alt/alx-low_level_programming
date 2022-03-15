#include "main.h"
/**
 * _isalpha.c return 1 if c is letter otherwise 0
 * @c: take character
 * Return: return 1 if c is letter otherwise 0
 **/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
