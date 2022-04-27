#include <stdio.h>

int main()
{
    int p1=0;
    int p2=0;
    int d1;
    int d2;
    int d3;
    int d4;
    int rand();
    int j=1;
    for (j;j<=11;j++)
    {   
        printf("\n Rodada %d do jogador 1: ",j);
        d1=(rand()%5+1);
        d2=(rand()%5+1);
        printf("%d e %d\n",d1,d2);
        printf("Rodada %d do jogador 2: ",j);
        d3=(rand()%5+1);
        d4=(rand()%5+1);
        printf("%d e %d\n",d3,d4);
        if (d1==d2 && d3!=d4)
            {
                printf("Jogador 1 venceu a rodada %d!\n",j);
                p1+=1;
                continue;
            }
        if (d1!=d2 && d3==d4)
        {
            printf("Jogador 2 venceu a rodada %d!\n",j);
            p2+=1;
            continue;
        }
        if (d1!=d2 && d3!=d4)
        {
            if (d1+d2>d3+d4)
            {
                printf("Jogador 1 venceu a rodada %d!\n",j);
                p1+=1;
            }
            if (d1+d2<d3+d4)
            {
                printf("Jogador 2 venceu a rodada %d!\n",j);
                p2+=1;
            }
        }
        if (d1==d2 && d3==d4)
        {
            if (d1>d3)
            {
                printf("Jogador 1 venceu a rodada %d!\n",j);
                p1+=1;
            }
            if (d1<d3)
            {
                printf("\n Jogador 2 venceu a rodada %d!\n",j);
                p2+=1;
            }
            else
            {
                printf("\n Ocorreu um empate!!!\n");
                continue;
                
            } 
        }
        
    }

    return 0;
        
    }



