#include "main.h"
/**
 * -islower -check if it's lower case and print lower case
 *  return : 0 for uppercase and 1 for lower case
 *
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
