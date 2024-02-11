#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro
{

    char titulo[100];
    unsigned int paginas;
    float preco;
} Livro;

typedef struct _aluno
{
    char nome[100];
    unsigned int idade;
    Livro *favorito;

} Aluno;

Livro *create_livro(const char *titulo, unsigned int paginas,
                    float preco)
{
    Livro *livro = calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->paginas = paginas;
    livro->preco = preco;
    return livro;
}

Livro *copy_livro(const Livro *livro)
{
    Livro *new_book = create_livro(livro->titulo, livro->paginas, livro->preco);

    return new_book;
}

Aluno *create_aluno(const char *nome, unsigned int idade,
                    Livro *livro_favorito)
{
    Aluno *aluno = calloc(1, sizeof(Aluno));

    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->favorito = copy_livro(livro_favorito);

    return aluno;
}

void print_livro(Livro *livro)
{
    printf("Titulo: %s\n", livro->titulo);
    printf("Paginas: %d\n", livro->paginas);
    printf("Preco: %.2f\n", livro->preco);
}

void print_aluno(Aluno *aluno)
{

    printf("Aluno: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    puts("Livro favorito: ");
    print_livro(aluno->favorito);
}

void destroy_livro(Livro **livro_ref)
{
    Livro *livro = *livro_ref;
    free(livro);
    *livro_ref = NULL;
}

int main()
{

    Livro *livro_harry = create_livro("Harry Potter", 200, 35.5);

    Aluno *ted = create_aluno("Ted", 18, livro_harry);

    print_aluno(ted);
    return 0;
}