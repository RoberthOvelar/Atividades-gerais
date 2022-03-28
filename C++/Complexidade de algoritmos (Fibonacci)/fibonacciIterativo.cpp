#include <stdio.h>
#include <time.h>

float fibIterativo(int n){
    float vetFib[n];

    vetFib[0] = 0;
    vetFib[1] = 1;
    vetFib[2] = 2;
    for(int i = 3; i <= n; i++){
        vetFib[i] = 0.7 * (vetFib[i-1] + vetFib[i-2]);
    }
    return vetFib[n];
}

int main(){
    int n;
    clock_t t;

    scanf("%d", &n);
    t = clock();
    printf("%.2f\n", fibIterativo(n));
    printf("%f segundos\n", ((float) clock() - t)/((CLOCKS_PER_SEC)));

    return 0;
}
