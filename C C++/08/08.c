#include <stdio.h>

int main() {
    int i;
    int array[] = {1, 2, 3, 4, 5, 6};
    int tamanho_do_array = sizeof(array) / sizeof(array[0]); 
    
    for (i = 0; i < tamanho_do_array; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
