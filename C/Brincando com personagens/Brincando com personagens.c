#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    char ch;
    char string[100];
    char frase[100];

    scanf(" %c", &ch);

    while (getchar() != '\n');

    scanf("%[^\n]%*c", string);

    scanf("%[^\n]%*c", frase);

    printf("%c\n", ch);

    printf("%s\n", string);

    printf("%s\n", frase);

    return 0;
}
