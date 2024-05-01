#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void print_pattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            printf("%d ", i > j ? i : j);
        }
        for (int j = 2; j <= n; j++) {
            printf("%d ", i > j ? i : j);
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            printf("%d ", i > j ? i : j);
        }
        for (int j = 2; j <= n; j++) {
            printf("%d ", i > j ? i : j);
        }
        printf("\n");
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
        print_pattern(n);

    
    return 0;
}
