#include <stdio.h>

int main() {
    char sentence[1000];
    
    scanf("%[^\n]", sentence);
    
    int i = 0;
    while (sentence[i] != '\0') {
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            printf("%c", sentence[i]);
            i++;
        }
        printf("\n"); 
        if (sentence[i] == ' ') 
            i++;
    }
    
    return 0;
}
