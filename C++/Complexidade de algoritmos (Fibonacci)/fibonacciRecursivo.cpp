#include <stdio.h>
#include <time.h>

float fib(int n){
    if (n <= 2){
        return n;
    }
    return 0.7 * (fib(n - 1) + fib(n - 2));
}

int main(){
    int n;
    clock_t t;

    scanf("%d", &n);
    t = clock();
    printf("%.2f\n", fib(n));
    printf("%f segundos\n", ((float) clock() - t)/((CLOCKS_PER_SEC)));

    return 0;
}