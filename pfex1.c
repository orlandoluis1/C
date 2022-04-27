#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int numPalavras = 0;
    char* palavras[50];
    char line[50];

    FILE *arquivo;
    arquivo = fopen("palavras.txt", "r");

    if (arquivo == NULL)
        return EXIT_FAILURE;

    while(fgets(line, sizeof line, arquivo) != NULL)
    {
        palavras[i] = strdup(line);
        i++;
        numPalavras++;
    }

    int j;

    for (j = 0; j < numPalavras; j++)
        printf("\n%s", palavras[j]);

    printf("\n\n");

    fclose(arquivo);

    return EXIT_SUCCESS;
}
