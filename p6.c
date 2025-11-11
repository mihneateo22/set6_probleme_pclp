#include<stdio.h>

void eliminare_elem1(int *n, int v[])
{
    int i, j, temp;
    for(i = (*n) -1; i >= 0; i--)
    {
        if(v[i] == v[0])
        {
            for(j = i; j < (*n) - 1; j++)
                v[j] = v[j + 1];
        (*n)--;
        }
    }
}

int main()
{
    int n, v[100], i;
    printf("introduceti numarul de elemente ale vectorului : ");
    scanf("%d", &n);
    printf("introduceti elementele vectorului :\n");
    for(i = 0; i < n; i ++)
        scanf("%d", &v[i]);
    eliminare_elem1(&n, v);
    printf("vectorul modificat are urmatoarele elemente :\n");
    for(i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);
    return 0;
}