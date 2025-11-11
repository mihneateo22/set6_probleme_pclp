#include<stdio.h>

void permutare_circulara_dreapta(int *n, int *m, int v[][100], int pas, int linie)
{
    int i, j, temp = 0;
    for(i = 0; i < pas + 1; i++)
    {
        temp = v[linie][(*n) - 1];
        for(j = (*n) - 1; j >= 1; j--)
            v[linie][j] = v[linie][j - 1];
        v[linie][j] = temp; 
    }
}

void matrice_schimbata(int *n, int *m, int a[][100])
{
    int i, j;
    for(i = 0; i < (*n); i++)
    {
        permutare_circulara_dreapta(n, m, a, i, i);
    }
}

int main()
{
    int n, m, i, j, a[100][100];
    printf("introduceti dimensiunile matricei : ");
    scanf("%d %d", &n, &m);
    printf("introduceti elementele matricei :\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    matrice_schimbata(&n, &m, a);
    printf("matricea schimbata este :\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}