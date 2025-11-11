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
    } while(flag == true);
    
}

void interclasare(int n, int m, int *k, int a[], int b[], int c[])
{
    int i, j;
    bubble_sort(n, a);
    bubble_sort(m, b);
    i = j = (*k) = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j])
            i++;
        else if(a[i] > b[j])
            j++;
        else
        {
            c[(*k)++] = a[i];
            i++;
            j++;
        }
    }
}

int main()
{
    int n, m, k, i, a[100], b[100], c[200];
    printf("introduceti numarul de elemente pentru primul si al doilea vector : ");
    scanf("%d %d", &n, &m);
    printf("introduceti elemenetele primului vector :\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("introduceti elementele celui de al doilea vector :\n");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);
    interclasare(n, m, &k, a, b, c);
    if(k != 0)
    {
        printf("vectorul c a fost creat. elementele sale sunt :\n");
        for(i = 0; i < k; i++)
            printf("%d ", c[i]);
        printf("\n");
    }
    else printf("vectorul c NU a putut fi creat.\n");
    return 0;
}