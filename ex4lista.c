#include <stdio.h>

int main()
{
    int num,i,y;
    i=1;
    printf("Digite um Numero: ");
    scanf("%d",&num);
    y=num;
    for (y;y!=0;y--)
    {
        i =( y * i );
    }
    printf("O fatorial de %d e: %d",num,i);

    return 0;
}


