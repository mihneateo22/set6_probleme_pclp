#include<stdio.h>

void numarare(int n, int v[], int *elem_pozitive, int *elem_negative, int *elem_nule)
{
    int i;
    (*elem_pozitive) = *(elem_negative) = (*elem_nule) = 0;
    for(i = 0; i < n; i++)
    {
        if(v[i] > 0)
            (*elem_pozitive)++;
        else if(v[i] < 0)
            (*elem_negative)++;
        else (*elem_nule)++;
    }
}

int main()
{
    int n, i, v[100], elem_pozitive, elem_negative, elem_nule;
    printf("introduceti numarul de elemente : ");
    scanf("%d", &n);
    printf("\n");
    printf("introduceti elementele vectorului : ");
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    numarare(n, v, &elem_pozitive, &elem_negative, &elem_nule);
    printf("numarul de elemente pozitive este %d\n", elem_pozitive);
    printf("numarul de elemente negative este %d\n", elem_negative);
    printf("numarul de elemente nule este %d\n", elem_nule);
    return 0;
}