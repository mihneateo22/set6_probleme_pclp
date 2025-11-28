#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void citire_vector(int size, int array[]);
void mem_r(int size1, int array1[], int size2, int array2[], bool *flag);

int main()
{
    int *array1, *array2, size1, size2;
    bool flag;
    scanf("%d", &size1);
    scanf("%d", &size2);
    array1 = calloc(size1, sizeof(int));
    array2 = calloc(size2, sizeof(int));
    citire_vector(size1, array1);
    citire_vector(size2, array2);
    mem_r(size1, array1, size2, array2, &flag);
    if(flag == true)
    {
        for(int i = 0; i < sizeof(array1); i++)
            printf("%d ", array1[i]);
    }
    else
    {
        for(int i = 0; i < sizeof(array2); i++)
            printf("%d ", array2[i]);
    }
    printf("\n");
    free(array1);
    free(array2);
    return 0;
}

void citire_vector(int size, int array[])
{
    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);
}

void mem_r(int size1, int array1[], int size2, int array2[], bool *flag)
{
    int cnt = 0;
    if(size2 < size1)
    {
        (*flag) = true;
        array1 = realloc(array1, (size1 + size2) * sizeof(int));
        for(int i = size1; i < size1 + size2; i++)
        {
            array1[i] = array2[cnt++];
        }
    }
    else if(size1 > size2)
    {
        (*flag) = false;
        array2 = realloc(array2, (size1 + size2) * sizeof(int));
        for(int i = size2; i < size1 + size2; i++)
        {
            array2[i] = array1[cnt++];
        }
    }
}