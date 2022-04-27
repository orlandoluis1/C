#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0;
    int mn=0;
    int hr=0;
    int t=0;
    
    do {
        printf("Cronometro \n\n");
        printf("\n\t\t\t\t %d HH: %d MM: %d SS \n\n",hr,mn,s);
        if (s==60){
            s=0;
            mn++;
        }
        if (mn==60){
            mn=0;
            hr++;
        }
        if (hr==24){
            hr=0;
        }
        s++;
        
    }
    while(t==0);
        


    return 0;
}


