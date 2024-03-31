#include <stdio.h>

/* 

Desafio: Soma de números pares
Escreva um programa em C que solicite ao usuário que insira um número 
inteiro positivo. Em seguida, o programa deve calcular e exibir a soma de todos os números pares de 1 até o número inserido pelo usuário, inclusive. Por exemplo, se o usuário inserir 6,
o programa deve calcular a soma 2 + 4 + 6 e exibir o resultado, que é 12. 

*/

int main() {
    int numero, soma = 0;

    printf("Insira um numero positivo: ");
    scanf("%d", &numero);

    if(numero <= 0) {
        printf("O número não é positivo");
        return 1;
    }
     
    for(int i = 2; i <= numero; i += 2) {
        soma += i;
    }
    
    printf("A soma dos números pares de 1 até %d é: %d", numero, soma);
    return 0;
}
