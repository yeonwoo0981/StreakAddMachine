#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d \n", &a, &b);

    int sum = a + b;
    double average = (a + b) / 2 + 0.5;

    printf("%d %.1f \n", sum, average);
    return 0;
}