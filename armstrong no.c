#include <stdio.h>

int main() {
    int i, n, rem, sum;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for(i = 1; i <= 100; i++) {
        n = i;
        sum = 0;

        
        while(n != 0) {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }

        
        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}