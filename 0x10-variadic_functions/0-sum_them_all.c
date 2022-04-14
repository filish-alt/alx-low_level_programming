#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i, j;
va_start(ap,n);
j=0;
for(i=0; i<n; i++)
{
	j+=va_arg(ap,int);
}
va_end(ap);
return n;
}
