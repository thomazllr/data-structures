#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v_stacks[5] = {0, 1, 2, 3, 4};

    puts("### VETOR ESTATICO");
    printf("Endereco : %p / O que tem dentro do v_stacks: %p\n", &v_stacks, v_stacks);
    for (int i = 0; i < 5; i++)
    {
        printf("&v_stacks[%d]= %p - v_stacks[%d] = %d\n\n", i, &v_stacks[i], i, v_stacks[i]);
    }
    puts("\n");

    int *v = calloc(5, sizeof(int));

    puts("### VETOR DINAMICO");
    printf("Endereco : %p / O que tem dentro do v = %p\n", &v, v);
    for (int i = 0; i < 5; i++)
    {
        printf("&v_stacks[%d]= %p - v_stacks[%d] = %d\n\n", i, &v[i], i, v[i]);
    }
    puts("\n");

    return 0;
}
