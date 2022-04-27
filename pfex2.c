#include <stdio.h>

int main()
{
  FILE *a1, *a2, *af;

  a1 = fopen("Arquivo1.txt", "r");
  a2 = fopen("Arquivo2.txt", "r");
  af = fopen("ArquivoFinal.txt", "w");


  if (a1 == NULL || a2 == NULL || af == NULL)
  {
    printf("Erro ao abrir arquivo.\n");
    return 1;
  }


  int c;
  while ((c = fgetc(a1)) != EOF) fputc(c, af);
  while ((c = fgetc(a2)) != EOF) fputc(c, af);
  
  fclose(af);
  fclose(a1);
  fclose(a2);
 
  return 0;
}
