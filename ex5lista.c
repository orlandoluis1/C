#include <stdio.h>

int main ()
{
  int m100 = 0;
  int m50 = 0;
  int m25 = 0;
  int m10 = 0;
  int m5 = 0;
  int m1 = 0;
  float v;
  printf ("Digite o valor (R$0.01 ate R$1.00): ");
  scanf ("%f", &v);
  printf ("o valor foi de R$%.2f", v);
  printf ("\n No troco tera:");

  while (1.00 <= v)
    {
      v = (v - 1.00);
      m100 += 1;
    }
  while (0.50 <= v)
    {
      v = (v - 0.50);
      m50 += 1;
    }
  while (0.25 <= v)
    {
      v = (v - 0.25);
      m25 += 1;
    }
  while (0.10 <= v)
    {
      v = (v - 0.10);
      m10 += 1;
    }
  while (0.05 <= v)
    {
      v = (v - 0.05);
      m5 += 1;
    }
  while (0.01 <= v)
    {
      v = (v - 0.01);
      m1 += 1;
    }


printf ("\n %d moedas de 1 real", m100);
printf ("\n %d moedas de 0,50 centavos", m50);
printf ("\n %d moedas de 0,25 centavos", m25);
printf ("\n %d moedas de 0,10 centavos", m10);
printf ("\n %d moedas de 0,05 centavos", m5);
printf ("\n %d moedas de 0,01 centavo", m1);



return 0;
}


