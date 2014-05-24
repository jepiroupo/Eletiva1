#include <stdio.h>
#include <stdlib.h>

int fibonacci (int num){
    int a = 0, b = 1, aux = 0;

    if (num == 0) return 0;
    if (num == 1)
        return 1;
    else {
        while(num > 1){
            aux = a+b;
            a = b;
            b = aux;
            num--;
        }
        return aux;
    }
}

int main()
{
    printf("fib(0) = %d\n", fibonacci(0));
    printf("fib(1) = %d\n", fibonacci(1));
    printf("fib(2) = %d\n", fibonacci(2));
    printf("fib(3) = %d\n", fibonacci(3));
    printf("fib(4) = %d\n", fibonacci(4));
    printf("fib(5) = %d\n", fibonacci(5));
    printf("fib(6) = %d\n", fibonacci(6));
    printf("fib(7) = %d\n", fibonacci(7));
    printf("fib(8) = %d\n", fibonacci(8));
    return 0;
}
