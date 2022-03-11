#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Return:Always 0(Sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0) {
        printf("%i",n,"is postive number\n ");
	}
	if(n == 0){
        printf("%i",n, "is zero\n" );
	}
	if(n < 0){
	printf("%i",n,"is negative number\n" );
	}
return (0);
}
