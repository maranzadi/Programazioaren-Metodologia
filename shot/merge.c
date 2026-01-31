#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void ordenar(int *lista, int size);
void merge(int *lista, int *left, int leftSize, int *right, int rightSize);


int main(int argc, char const *argv[])
{
    /* code */

    int myNumbers[] = {6,3,4,1,5,2,7,0};
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);

    ordenar(myNumbers, size);

    for (size_t i = 0; i < size; i++)
    {
        printf("El número es: %d\n", myNumbers[i]);
    }
    


    return 0;
}

void ordenar(int *lista, int size) {
    if (size <= 1){
        return;
    }

    int mid = size / 2;

    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++)
        left[i] = lista[i];

    for (int i = mid; i < size; i++)
        right[i - mid] = lista[i];

    ordenar(left, mid);
    ordenar(right, size - mid);

    merge(lista, left, mid, right, size - mid);
}

void merge(int *lista, int *left, int leftSize, int *right, int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j])
            lista[k++] = left[i++];
        else
            lista[k++] = right[j++];
    }

    while (i < leftSize)
        lista[k++] = left[i++];

    while (j < rightSize)
        lista[k++] = right[j++];
}
