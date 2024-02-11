#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

int main()
{

    Aluno *ted = calloc(1, sizeof(Aluno));

    strcpy(ted->nome, "Ted");
    ted->idade = 10;

    printf("Nome do ted: %s, idade: %d\n", ted->nome, ted->idade);

    return 0;
}