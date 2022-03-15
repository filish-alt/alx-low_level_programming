#include "main.h"
/**
 * -islower - is print lower case
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
