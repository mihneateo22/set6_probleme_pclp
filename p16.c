#include<stdio.h>
#include<stdbool.h>

int verificare_monotonie(int a, int b)
{
    if(a > b)
        return 0;
    else if(a < b)
        return 1;
    return 2;
}

void function(int a[][100], int n, int m, int(*verif)(int, int), int new_mat[][100], int *cnt_linii)
{
    int i, j, k, cnt_desc, cnt_cresc;
    (*cnt_linii) = 0;
    for(i = 0; i < n; i++)
    {
        cnt_desc = cnt_cresc = 0;
        for(j = 0; j < m - 1; j++)
        {
            if(verif(a[i][j], a[i][j + 1]) == 0)
                cnt_desc++;
            else if(verif(a[i][j], a[i][j +1]) == 1)
                cnt_cresc++;
        }
        if(cnt_desc == m - 1 || cnt_cresc == m - 1)
        {
            for(k = 0; k < m; k++)
                new_mat[*cnt_linii][k] = a[i][k];
            (*cnt_linii)++;
        }
    }
}

int main()
{
    int a[100][100], n, m, i, j, new_mat[100][100], cnt_linii;
    printf("introduceti dimensiunile matricei : ");
    scanf("%d %d", &n, &m);
    printf("introduceti valorile matricei : \n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("\n");
    function(a, n, m, verificare_monotonie, new_mat, &cnt_linii);
    printf("matricea schimbata este urmatoarea : \n");
    for(i = 0; i < cnt_linii; i++)
    {
        for(j = 0; j < m; j++)
            printf("%d ", new_mat[i][j]);
        printf("\n");
    }
    return 0;
}