#include <cstddef>

int main(int argc, char const *argv[])
{
    /* code */

    int myNumbers[] = {6,3,4,1,5,2,7,0};
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);

    ordenar(myNumbers, size);



    return 0;
}

void ordenar(int *lista, int size){
    //int listaOr[size];

    if (size !=1)
    {
        int mid = size / 2;

        int left[mid];
        int right[mid];


        for (int i = 0; i < mid; i++) {
            left[i] = arr[i];
            right[i] = arr[mid + i];
        }
        ordenar(left, mid);
        ordenar(right, ordenar)
    }
    

    
    
    
}
