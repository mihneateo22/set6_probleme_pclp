#include<stdio.h>
#include<stdbool.h>

bool paritate(unsigned int n)
{
    return n % 2;
}

void maxim_impar(unsigned int n, unsigned int v[], bool (*check)(unsigned int), unsigned int *maxi)
{
    unsigned int i;
    (*maxi) = v[0];
    for(i = 1; i < n; i++)
    {
        if(check(v[i]) == true)
        {
            if(v[i] > (*maxi))
                (*maxi) = v[i];
        }
    }
}

int main()
{
    unsigned int n, v[100], i, maxi;
    printf("introduceti dimensiunea vectorului : ");
    scanf("%d", &n);
    printf("introduceti valorile vectorului : ");
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    maxim_impar(n, v, paritate, &maxi);
    printf("maximul impar din vector este : %d\n", maxi);
    return 0;
}