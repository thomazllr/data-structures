#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

void imprime(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Endereco na funcao: %p/ Valor de v[%d]: %d\n", &v[i], i, v[i]);
    }
}

void imprime2(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Endereco na funcao: %p/ Valor de v[%d]: %d\n", &v[i], i, v[i]);
    }
}

void desaloca(int **v)
{
    free(*v);
    *v = NULL;
}