#include<stdio.h>

void functie_suma_max(int i, int m, int j, int n, float a[][100], int *x)
{
    float suma = 0, suma_max = a[0][0];
    for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
                {
                    suma += a[i][j];
                }
            if(suma > suma_max)
                {
                    suma_max = suma;
                    (*x) = i;
                }
            suma = 0;
        }
}

void determinare_sum_max(int *linie, int *coloana, float a[][100], int m, int n)
{
    int i, j;
    functie_suma_max(i, m, j, n, a, linie);
    functie_suma_max(j, n, i, m, a, coloana);
}
int main()
{
    float a[100][100];
    int i, j, m, n, linie, coloana;
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%f", &a[i][j]);
    determinare_sum_max(&linie, &coloana, a, m, n);
    printf("linia cu suma maxima este : %d\n", linie);
    printf("coloana cu suma maxima este : %d\n", coloana);
    return 0;
}
