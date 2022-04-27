#include <stdio.h>

int n,para=0;
int main()
{
	for(n=0;para!= 1;n++)
    {
        if (n%3==2)
        {
            if(n%5==3)
            {
                if(n%7==4)
                {
                    para=1;
                    break;
                }
            }
        }
    }
	printf("%d",n);
	return 0;
}
