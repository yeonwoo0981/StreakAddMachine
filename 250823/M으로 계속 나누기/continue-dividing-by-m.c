#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    while (n != 0){
        printf("%d \n", n);
        n /= m;
    }
    
    return 0;
}