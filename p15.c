#include<stdio.h>
#include<stdbool.h>

int suma_linii(int n, int v[])
{
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += v[i];
    return s;
}

void interschimbare_linii(int n, int linie1[], int linie2[])
{
    int i, temp;
    for(i = 0; i < n; i++)
    {
        temp = linie1[i];
        linie1[i] = linie2[i];
        linie2[i] = temp;
    }
}

void functie(int m, int n, int a[][100])
{
    int i, j;
    for(i = 0; i < m - 1; i++)
    {
        for(j = i + 1; j < m; j++)
        {
            if(suma_linii(n, a[i]) > suma_linii(n, a[j]))
                interschimbare_linii(n, a[i], a[j]);
        }
    }
}

int main()
{
    int m, n, i, j, a[100][100];
    printf("introduceti dimensiunile matricei\n");
    printf("linii : ");
    scanf("%d", &m);
    printf("coloane : ");
    scanf("%d", &n);
    printf("\n");
    printf("introduceti valorile matricei : \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    functie(m, n, a);
    printf("\nrezultatul final : \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}