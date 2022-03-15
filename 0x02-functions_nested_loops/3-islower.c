#include "main.h"
/**
 * _islower -check if it's lower case and print lower case
 *Return : 0 for uppercase and 1 for lower case
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
