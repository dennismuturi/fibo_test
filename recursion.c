#include <stdio.h>
#include <stdlib.h>

int fibo (int n) {
    if (n == 0){
      return 1;
    }else if (n == 1){
        return 1;
    }else if(n == 2){
        return 2;
    }
    else { 
      return fibo(n-3) + fibo(n-2);
    }
}


int main () {
    printf("Answer is: %d\n", fibo(4));
    return 0;
}