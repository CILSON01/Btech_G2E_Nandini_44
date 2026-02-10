#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, num3;

    printf("Enter three numbers: ");

    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1;
    }

    if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2 && num1 == num3) {
            printf("All three numbers are equal: %.2lf\n", num1);
        } else {
            printf("The greatest number is: %.2lf\n", num1);
        }
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is: %.2lf\n", num2);
    } 
    else {
        printf("The greatest number is: %.2lf\n", num3);
    }

    return 0;
}
