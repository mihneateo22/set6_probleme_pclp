#include<stdio.h>

void citire_matrice(int *n, int *m, int mat[][100])
{
    int i, j;
    printf("introduceti numarul de linii : \n");
    scanf("%d", n);
    printf("introduceti numarul de coloane : \n");
    scanf("%d", m);
    printf("introduceti elemenetele matricei : \n");
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            scanf("%d", &mat[i][j]);
}

void citire_vector(int *n, int v[])
{
    int i;
    printf("introduceti dimensiunea vectorului : ");
    scanf("%d", n);
    for(i = 0; i < *n; i++)
        scanf("%d", &v[i]);
}

void verificare_identic(int nr_valori_mat, int nr_valori_b, int *flag, int mat[], int b[])
{
    int i, cnt = 0;
    (*flag) = 0;
    if(nr_valori_mat == nr_valori_b)
        {
            for(i = 0; i < nr_valori_mat; i++)
                {
                    if(mat[i] == b[i])
                        cnt++;
                }
        }
    if(cnt == nr_valori_mat)
        (*flag) = 1;
}

int main()
{
    int mat[100][100], n, m, i, j, v[100], x, flag, vector_linii[100], k = 0;
    citire_matrice(&n, &m, mat);
    citire_vector(&x, v);

    printf("\nmatricea este : \n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    printf("\nvectorul este : \n");

    for(i = 0; i < x; i++)
        printf("%d ", v[i]);

    for(i = 0; i < n; i++)
        {
            verificare_identic(m, x, &flag, mat[i], v);
            if(flag == 1)
                vector_linii[k++] = i;
        }
    printf("\nnumerele liniilor egale cu vectorul : ");
    for(i = 0; i < k; i++)
        printf("%d ", vector_linii[i]);
    return 0;
}
