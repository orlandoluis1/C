#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, i, p;
    printf ("digite um numero: ");
    scanf ("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
	    {
	    	p++;
	    }
    }
    if (p==1)
    {
        printf("%d e um numero primo\n",n);
    }
    else
    {
        printf("%d nao e um numero primo\n",n);
    }
  return 0;
}
