#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *main -Entry point
 *Return:Always 0(Sucess)
*/
int main(void)
{
char put[] = "_putchar";
int c;
for (c = 0; c <= 7; c++)
{
_putchar(put[c]);
}
putchar('\n');
return (0);
}	
