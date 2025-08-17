#include <stdio.h>

int main() {
    int a, b, c;
    int sum;
    int avg;
    int sumAvg;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = (a + b + c) / 3;
    sumAvg = sum - avg;

    printf("%d \n%d \n%d", sum, avg, sumAvg);
}