#include <stdio.h>
#include <math.h> 

int primo(int z); 
int palindromo(int num);


int main(void) {
    // printf("Hello, World!\n");
    // return 0;


    int n1 = 200;
    int n2 = 1000;

    for (size_t i = n1; i < n2+1; i++)
    {
        // printf("%zu\n", i);
        int egia = primo(i);
        if (egia ==1)
        {
            printf("%zu\n", i);
        }
        
        

    }
    
    


}

int primo(int z){
    int raiz = (int) sqrt(z) +1;
    for (size_t i = 2; i < raiz; i++)
    {
        if (z%i==0)
        {
            return 0;
        }
    }


    // printf("%d\n", z);

    
    return palindromo(z);
}

int palindromo(int num){

    // printf("%d\n", num);
    int n =num;
    int rev =0;
    
    while (num>0)
    {
        int dig = num % 10;
        rev = rev * 10+dig;
        num = num /10;
    }

    //printf("%d\n", n);
    //printf("%d\n", rev);

    if(n == rev){
        return 1;
    }
    return 0;
    

}