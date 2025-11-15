#include<stdio.h>
#include<stdlib.h>

void citire_vector(int m, int v[])
{
    printf("introduceti valorile vectorului : \n");
    for(int i = 0; i < m; i++)
        scanf("%d", &v[i]);
}

int main()
{
    int m, i;
    printf("introduceti dimensiunea vectorului : ");
    scanf("%d", &m);
    int *v = calloc(m, sizeof(int));
    citire_vector(m, v);
    printf("vectorul este : \n");
    for(i = 0; i < m; i++)
        printf("%d ", v[i]);
    printf("\n");
    free(v);
    return 0;
}