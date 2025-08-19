#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a < b)
    printf("%d %d", a < b, 0);
    else if(a == b)
    printf("%d %d", 0, a == b);
}