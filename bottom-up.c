#include <stdio.h>
#include <stdlib.h>


int fibo_bottom_up(int n)
{
    int fib[n+1],i;

    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else if(n == 2){
        return 2;
    }
    fib[0] = 0;
    fib[1] = 1;
    fib[2]= 2;

    for(i = 3; i <= n; i++)
        fib[i] = fib[i-3]+fib[i-2];


    return fib[n];
}

int main()
{

        printf("Answer is: %d\n",fibo_bottom_up(3));

    return 0;
}