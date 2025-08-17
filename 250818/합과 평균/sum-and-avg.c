#include <stdio.h>

int main() {
    int a, b;
    int sum;
    double avg;
    
    scanf("%d %d", &a, &b);

    sum = a + b;
    avg = (a + b) / 2.0;

    printf("%d %.1f\n", sum, avg);

    return 0;
}