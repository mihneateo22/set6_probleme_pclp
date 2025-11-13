#include<stdio.h>
#include<stdbool.h>

void bubble_sort(int n, int v[])
{
    int i, j = 0, temp;
    bool flag;
    do
    {
        flag = false;
        for(i = 0; i < (n - 1 - j); i++)
        {
            if(v[i] > v[i + 1])
            {
                flag = true;
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
        j++;
    }while(flag == true);
}

int main()
{
    int a[100][100], m, n, i, j;
    printf("introduceti dimensiunile matricei : \n");
    printf("linii : \n");
    scanf("%d", &m);
    printf("coloane : \n");
    scanf("%d", &n);
    printf("acum introduceti elementele matricei : \n\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < m; i++)
    {
        bubble_sort(n, a[i]);
    }
    printf("\nmatricea sortata este urmatoarea : \n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}