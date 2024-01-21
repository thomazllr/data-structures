#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{

    double *v2;

    alloc_dinamico(&v2);

    puts(" ");

    imprime(v2, 5);

    puts(" ");
    for (int i = 0; i < 5; i++)
    {
        printf("Endereco na stack: %p/ Valor de v[%.lf]: %.lf\n", &v2[i], i, v2[i]);
    }

    puts(" ");
    printf("Dentro de v2: %p\n", v2);
    printf("Endereco na stack: %p\n", &v2);

    desaloca(&v2);
    printf("Dentro de v2: %p\n", v2);
    printf("Endereco na stack: %p\n", &v2);

    return 0;
}