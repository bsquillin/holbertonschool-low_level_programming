#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
*  main - find if number is neg or pos
* return = 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 if (n == 0)
{ printf("%d is 0\n", n);
   } else if (n > 0)
{ printf("%d is positive\n", n);
   } else if (n < 0)
{ printf("%d is negative\n", n); }

return (0);
}
