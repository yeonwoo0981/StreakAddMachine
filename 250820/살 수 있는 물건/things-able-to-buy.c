#include <stdio.h>

int main() {
    int book = 3000;
    int mask = 1000;
    int n;
    scanf("%d", &n);

    if (n >= book)
    printf("book");
    else if (n >= mask)
    printf("mask");
    else
    printf("no");
}