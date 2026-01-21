#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

int primo(int z); 
int palindromo(int num);
int MillerRabin(int num, int k);
long long modpow(long long base, long long exp, long long mod);


int main(void) {
    // printf("Hello, World!\n");
    // return 0;


    int n1 = 0;
    int n2 = 727379968;
    // int n2 =100;

    int zenbat =0;

    for (size_t i = n1; i < n2+1; i++)
    {
        // printf("%zu\n", i);
        // int egia = primo(i);
        int egia = MillerRabin(i, 10);
        if (egia ==1)
        {
            printf("%zu\n", i);
            zenbat++;
        }
        
        

    }

    printf("zenbat:");
    printf("%d\n", zenbat);
    
    


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


int MillerRabin(int z, int k){

    if (z < 2 || !(z & 1)) {
        return 0;
    }

    int num = z-1;

    int bi =0;
    while ((num & 1) == 0)
    {
        num = num/2;
        bi++;
    }
    
    int impar = num;
    

    for (size_t i = 0; i < k; i++)
    {
        int r = (rand() % (z-1 - 2 + 1)) + 2;
        int fpp =0;
        if (modpow(r, impar, z) == 1)
        {
            fpp = 1;
        }else{
            int a =0;
            while (a <=bi && fpp ==0)
            {
                if (modpow(r, (1LL << a) * impar, z) == z-1){
                    fpp = 1;
                }
                a += 1;
                
            }
            
        }
        if (fpp==0)
        {
            return 0;
        }
            
    }

    return palindromo(z);


    


    

    
    
}

long long modpow(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
