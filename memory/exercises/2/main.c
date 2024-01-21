#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{

    int vs[5] = {5, 10, 4, 5, 10};

    puts("ALOCACAO ESTATICA");
    printf("ENDERECO NA STACK: %p\n", &vs);
    imprime(vs, 5);

    puts(" ");

    puts("ALOCACAO DINAMICA");
    int *v = calloc(5, sizeof(int));
    printf("\nENDERECO NA STACK: %p\n", &v);
    for (int i = 0; i < 5; i++)
    {
        v[i] = i + 1;
    }
    imprime2(v, 5);

    desaloca(&v);

    puts("DEPOIS DA FUNCAO FREE");

    printf("&v= %p, v=%p\n\n", &v, v);

    return 0;
}