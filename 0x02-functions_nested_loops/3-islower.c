#include "main.h"
/**
 * _islower - return 1 if lower case and 0 otherwise
 *Return: 0 for uppercase and,1 for lowercase
 *@c: take in character
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
