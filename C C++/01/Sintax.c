#include <stdio.h>

int main(void){
    int n = 10;
    float n2 = 6.78;
    char letra = 'a';
    char frase[10]= "bom dia!";
    double n3 = 1.1234;

    printf("Hello word in C");
    printf("Exibindo o numero inteiro %d",n);
    printf("Exbindo caracters %c", letra);
    printf ("exibindo frases %s", frase);
    printf ("Exibindo um numero double %f", n3);
    printf("valores: %d %c %s %f ", n , letra, frase, n3 );
    return 0;
}


/* Números inteiros %d*/
/* Float e double %f*/
/*caracters %c*/
/* string %s*/