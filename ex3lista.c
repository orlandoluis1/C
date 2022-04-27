#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,i,s=0;
    printf("Numeros perfeitos encontrados:");
    for(n=1;n<=32767;n++){
    for(i=1;i<=(n/2);i++){
        r = n % i;
        if(r==0){
            s = s+i;
        }
    }
    if(n==s){
        printf("\n %d",n);
    }
    s=0;
    }

    return 0;
}


