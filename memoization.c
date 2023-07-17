#include <stdio.h>
#include <stdlib.h>


int fibo_memoize (int n) {
    int memo[50];
    memo[0]=1;
    memo[1]=1;
    memo[2]=2;
    if(memo[n] != NULL){
        return memo[n];
    }
    else{
       memo[n]=fibo_memoize (n-3) + fibo_memoize (n-2);
       return memo[n];
    }
    
}


int main () {
    printf("Answer is: %d\n",fibo_memoize (2));
    
}