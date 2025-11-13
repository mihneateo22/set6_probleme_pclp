#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool paritate(unsigned int n)
{
    return n % 2;
}

void construction(unsigned int n, unsigned int v[], unsigned int par[], unsigned int impar[], bool (*compare)(unsigned int), unsigned int (*size_par), unsigned int (*size_impar))
{
    unsigned int i;
    (*size_par) = 0, (*size_impar) = 0;
    for(i = 0; i < n; i++)
    {
        if(compare(v[i]) == true)
            impar[(*size_impar)++] = v[i];
        else par[(*size_par)++] = v[i];
    }
}

int main()
{
    unsigned int n, i, size_par, size_impar, v[100], par[100], impar[100];
    printf("introduceti dimensiunea vectorului : ");
    scanf("%u", &n);
    printf("introduceti valorile vectorului : ");
    for(i = 0; i < n; i++)
        scanf("%u", &v[i]);
    construction(n, v, par, impar, paritate, &size_par, &size_impar);
    printf("vectorul de valori pare este : ");
    for(i = 0; i < size_par; i++)
        printf("%u ", par[i]);
    printf("\nvectorul de valori impare este : ");
    for(i = 0; i < size_impar; i++)
        printf("%u ", impar[i]);
    printf("\n");
    return EXIT_SUCCESS;
}