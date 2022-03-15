#include "main.h"
/**
 * _isalpha - check for alphapetic character
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
