#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Return:Always 0(Sucess)
*/
int main(void)
{
int i = 0;
while(i < 10)
{
putchar(i % 10 + '0');
i++;
}
putchar('\n');
return (0);
}
