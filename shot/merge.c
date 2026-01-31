#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int ordenar(int *lista, int size);

int main(int argc, char const *argv[])
{
    /* code */

    int myNumbers[] = {6,3,4,1,5,2,7,0};
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);

    int *ordenatuta = ordenar(myNumbers, size);

    for (size_t i = 0; i < size; i++)
    {
        printf("El número es: %d\n", ordenatuta[i]);
    }
    


    return 0;
}

int ordenar(int *lista, int size){
    //int listaOr[size];

    int numbers[size];
    
    int mid = size / 2;

    int left[mid];
    int right[size - mid];


    for (int i = 0; i < mid; i++) {
        left[i] = lista[i];
        right[i] = lista[mid + i];
    }

    if (size <= 1)
    {
        
        ordenar(left, mid);
        ordenar(right, mid);
    }else{
        int leftSize =0;
        int rigthSize = 0;
        int indi=0;
        while (leftSize<mid && rigthSize<mid)
        {
            if (leftSize>mid)
            {
                numbers[indi] = right[rigthSize];
                rigthSize++;
            }
            else if (rigthSize>mid)
            {
                numbers[indi] = left[leftSize];
                leftSize++;
            }
            else if (left[leftSize]> right[rigthSize])
            {
                numbers[indi] = right[rigthSize];;
                rigthSize++;
            }else if (left[leftSize]< right[rigthSize])
            {
                numbers[indi] = left[leftSize];;
                leftSize++;
            }
            indi++;
        }
        
        return numbers;
        
    }

    
    
    
}
