#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool comparatie(int a, int b)
{
    return a == b;
}

void function(int n, int v[], bool (*compare)(int, int), int *cnt)
{
    int i;
    (*cnt) = 0;
    for(i = 0; i < n - 1; i++)
        if(compare(v[i], v[i +1]) == true)
            (*cnt)++;
}

int main()
{
    int n, v[100], i, cnt;
    printf("introduceti dimensiunea vectorului : ");
    scanf("%d", &n);
    printf("introduceti valorile vectorului : ");
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    function(n, v, comparatie, &cnt);
    printf("numarul de perechi de elemente consecutive identice este : %d\n", cnt);
    return 0;
}