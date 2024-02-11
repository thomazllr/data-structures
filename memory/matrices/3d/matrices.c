#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n_slices = 2;
    int n_rows = 2;
    int n_cols = 3;

    int ***m = (int ***)calloc(n_slices, sizeof(int **));

    for (int k = 0; k < n_slices; k++)
    {
        m[k] = calloc(n_rows, sizeof(int *));
        for (int i = 0; i < n_rows; i++)
        {
            m[k][i] = calloc(n_cols, sizeof(int));
        }
    }

    for (int k = 0; k < n_slices; k++)
    {
        printf("&m[%d] = %p, m[%d] = %p\n", k, &m[k], k, m[k]);
        for (int i = 0; i < n_rows; i++)
        {
            printf("&m[%d][%d] = %p, m[%d][%d] = %p\n", k, i, &m[k][i], k, i, m[k][i]);

            for (int j = 0; j < n_cols; j++)
            {
                printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n", k, i, j, &m[k][i][j], k, i, j, m[k][i][j]);
            }
            puts(" ");
        }
        puts(" ");
    }

    for (int k = 0; k < n_slices; k++)
    {
        for (int i = 0; i < n_rows; i++)
        {
            free(m[k][i]);
        }
        free(m[k]);

        free(m);
        m = NULL;

        return 0;
    }