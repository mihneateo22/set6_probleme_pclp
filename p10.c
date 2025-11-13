//teodorescu mihnea 311ac
#include<stdio.h>

void verificare_identic(int nr_valori_a, int nr_valori_b, int *flag, int a[], int b[])
{
    int i, cnt = 0;
    (*flag) = 0;
    if((nr_valori_a) == nr_valori_b)
    {
        for(i = 0; i < nr_valori_a; i++)
        {
            if(a[i] == b[i])
                cnt++;
        }
    }
    if(cnt == nr_valori_a)
        (*flag) = 1;
}

int main()
{
    int a[100][100], b[100][100], i, j, nr_valori_a_linie, nr_valori_a_coloana, v1[100], v2[100],
    nr_valori_b_linie, nr_valori_b_coloana, flag, cnt = 0, dim1, dim2;
    /*
    scanf("%d %d", &dim1, &dim2);
    for(i = 0; i < dim1; i++)
        scanf("%d", &v1[i]);
    for(i = 0; i < dim2; i++)
        scanf("%d", &v2[i]);
    verificare_identic(dim1, dim2, &flag, v1, v2);
    printf("%d\n", flag);
    */
    printf("introduceti dimenisunile matricelor");
    scanf("%d %d %d %d", &nr_valori_a_linie, &nr_valori_a_coloana, &nr_valori_b_linie, &nr_valori_b_coloana);
    if(nr_valori_a_linie == nr_valori_b_linie && nr_valori_a_coloana == nr_valori_b_coloana)
    {
        for(i = 0; i < nr_valori_a_coloana; i++)
            for(j = 0; j < nr_valori_a_linie; j++)
                scanf("%d", &a[i][j]);
        for(i = 0; i < nr_valori_b_coloana; i++)
            for(j = 0; j < nr_valori_b_linie; j++)
                scanf("%d", &b[i][j]);
        for(i = 0; i < nr_valori_a_coloana; i++)
        {
            verificare_identic(nr_valori_a_linie, nr_valori_b_linie, &flag, a[i], b[i]);
            if(flag == 1)
                cnt++;
        }
        if(cnt == nr_valori_a_coloana)
            printf("cele 2 matrice sunt identice\n");
        else printf("cele 2 matrice NU sunt identice\n");
    }
    return 0;
}