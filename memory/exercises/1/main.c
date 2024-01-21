#include <stdio.h>
#include <stdlib.h>

void imprime(int *v, int n);

void imprime2(int vector[], int n);

int main()
{
    int vs[5], tam;

    puts("\nALOCACAO ESTATICA COM FUNCAO");
    printf("Endereco de vs-> %p\n", &vs);
    imprime2(vs, 5);
    puts("NA STACK\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Endereco: %p/ Valor de v[%d]: %d\n", &vs[i], i, vs[i]);
    }

    puts(" ");
    imprime(vs, 5);
    puts("NA STACK\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Endereco: %p/ Valor de v[%d]: %d\n", &vs[i], i, vs[i]);
    }

    return 0;
}

void imprime(int *v, int n)
{
    puts("NA FUNCAO");
    for (int i = 0; i < n; i++)
    {
        printf("Endereco: %p/ Valor de v[%d]: %d\n", &v[i], i, v[i]);
    }
}

void imprime2(int vector[], int n)
{
    puts("NA FUNCAO");
    for (int i = 0; i < n; i++)
    {
        printf("Endereco: %p/ Valor de v[%d]: %d\n", &vector[i], i, vector[i]);
    }
}
