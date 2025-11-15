#include<stdio.h>

void interschimbare_vector(int n, int v1[], int v2[])
{
    int i, temp;
    for(i = 0; i < n; i++)
    {
        temp = v1[i];
        v1[i] = v2[i];
        v2[i] = temp;
    }
}

void interschimbare_matrice(int n, int m, int a[][100], int linia1, int linia2, int coloana1, int coloana2)
{
    int i, temp;

    interschimbare_vector(n, a[linia1], a[linia2]); //interschimbarea de linii a[linia1][i] se interschimba cu a[linia2][i]

    //interschimbare coloane
    for(i = 0; i < n; i++)
    {
        temp = a[i][coloana1];
        a[i][coloana1] = a[i][coloana2];
        a[i][coloana2] = temp;
    }
}

int main()
{
    int a[100][100], n, m, i, j, l1, l2, c1, c2;
    printf("introduceti dimensiunea matricei : ");
    scanf("%d %d", &n, &m);
    printf("introduceti elementele matricei : \n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("\n");
    printf("introduceti liniile de interschimbat : ");
    scanf("%d %d", &l1, &l2);
    printf("introduceti coloanele de interschimbat : ");
    scanf("%d %d", &c1, &c2);
    interschimbare_matrice(n, m, a, l1, l2, c1, c2);
    printf("\nmatricea schimbata este : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}