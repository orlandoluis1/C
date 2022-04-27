#include <stdio.h>

int main()
{
int n[]={26,82,53,92,52,24,70,96,28,34,24,66,41,80,20,16,15,94,36,9,59,54,22,69,2,52,39,68,84,10,83,60,2,22,11,25,99,7,59,
100,31,79,66,81,65,35,90,29,57,18};
int i,m1,m2;
m1=m2=0;
for(i=0;i<50;i++){
    if( n[i] > m1 ){   
        if(m1 > m2){        
            m2 = m1;    
            }   
        m1 = n[i];
    }
    if( n[i] > m2 && n[i] != m1 ){  
        m2 = n[i];
    }
    
}
printf("\n O maior numero e: %d \n",m1);
printf("O segundo maior numero e: %d",m2);

    return 0;
}



