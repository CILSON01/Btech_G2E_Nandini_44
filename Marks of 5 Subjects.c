#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int sum;
    float percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

   
    sum = m1 + m2 + m3 + m4 + m5;

    percentage = (sum / 500.0) * 100;

  
    printf("Sum of marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
