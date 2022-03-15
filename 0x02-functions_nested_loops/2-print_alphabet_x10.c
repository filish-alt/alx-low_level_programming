#include "main.h"
/*
 * 2-print_alphabet_x10 print alphapet lowercase 10times
 *
 */
void print_alphabet_x10(void)
{
char c;
int i;
for ( c = 'a'; c <= 'z'; c++)
{
for ( i = 0; i < 10; i++)
{
_putchar(c);
}
_putchar('\n');
}
}
