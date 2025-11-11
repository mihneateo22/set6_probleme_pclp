#include<stdio.h>

void insert_min(int n, int *m, int a[], int b[])
{
    int i = 0, mini = a[0];
    (*m) = 0;
    for(i = 1; i < n; i++)
        if(a[i] < mini)
            mini = a[i];
    for(i = 0; i < n; i++)
    {
        if(a[i] == mini)
        {
            b[(*m)++] = i;
        }
    }
}

int main()
{
    int n, i, m, a[100], b[100];
    printf("introduceti numarul de elemente ale vectorului : ");
    scanf("%d", &n);
    printf("introduceti elementele vectorului :\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insert_min(n, &m, a, b);
    printf("vectorul b a fost creat. elementele sale sunt :\n");
    for(i = 0; i < m; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}