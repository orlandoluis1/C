#include <stdio.h>

int main()
{
    int a[10]={20,22,23,21,30,19,15,29,40,51};
    int b[10]={29,33,32,31,34,35,25,16,37,48};
    int c[10]={1,2,3,4,5,6,7,8,9,10};
    int d[30];
    int f,g,aux;
    for(f=0; f<10; f++)
    {
       d[f] = a[f];
    }
    for(f=0; f<10; f++)
    {
       d[f+10] = b[f];
    }
    for(f=0; f<10; f++)
    {
       d[f+20] = c[f];
        
    }
    for (f=0;f<30;f++)
    {
        for (g=f+1;g<30;g++)
        {
            if (d[f]>d[g])
            {
                aux=d[f];
                d[f]=d[g];
                d[g]=aux;
            }
        }
        
    }
    printf("os numeros em ordem crescente sao:\n");
    for (f=0;f<30;f++)
    {
        printf("%d,",d[f]);
    }

    return 0;
}


