#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, i;
    long long fact = 1;

   
    if(argc != 2) {
        printf("Usage: ./program <number>\n");
        return 1;
    }

    
    n = atoi(argv[1]);

    
    if(n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 1;
    }

    
    for(i = 1; i <= n; i++) {
        fact *= i;
    }

   
    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}