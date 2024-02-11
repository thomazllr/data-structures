#include <stdio.h>
#include <stdlib.h>

int **create_matrices(int nrows, int ncols)
{
    int **m = calloc(nrows, sizeof(int *));

    for (int i = 0; i < nrows; i++)
    {
        m[i] = calloc(ncols, sizeof(int));
    }

    return m;
}

void print_matrice(const int **m, int nrows, int ncols)
{
    for (int i = 0; i < nrows; i++)
    {
        printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);

        for (int j = 0; j < ncols; j++)
        {
            printf("\n&m[%d][%d] = %p, m[%d][%d] = %p\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts(" ");
    }
}

void destroy(int ***m, int nrows, int ncols)
{
    int **aux = *m;

    for (int i = 0; i < nrows; i++)
    {
        free(aux[i]);
    }
    free(aux);
    *m = NULL;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("error");
        exit(-1);
    }

    int nrows = atoi(argv[1]);
    int ncols = atoi(argv[2]);

    int **m = create_matrices(nrows, ncols);

    int count = 0;

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            m[i][j] = count;
            count++;
        }
    }

    print_matrice(m, nrows, ncols);

    destroy(&m, nrows, ncols);

    printf("\n\nm is null? %d", m == NULL);

    return 0;
}