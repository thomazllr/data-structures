#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

double *alloc()
{
    double *v;
    v = (double *)malloc(5 * sizeof(double));
    return v;
}

double *alloc_dinamico(double **v)
{
    return *v = (double *)malloc(5 * sizeof(double));
}

void imprime(double *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Endereco na funcao: %p/ Valor de v[%.lf]: %.lf\n", &v[i], i, v[i]);
    }
}

void desaloca(double **v)
{
    free(*v);
    *v = NULL;
}
