#include <stdio.h>

float Soma();
float Multi();
float Div();
int main() {
    int opcao;
    puts("Opção 1 : Soma");
    puts("Opção 2 : Multiplicação");
    puts("Opção 3 : Divisão");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("Resultado da Soma: %.2f\n", Soma());
            break;
        case 2: 
            printf("Resultado da Multiplicação: %.2f\n", Multi());
            break;
        case 3: 
            printf("Resultado da Divisão é: %.2f\n", Div());
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
float Soma() {
    float x, y;
    puts("Digite o valor de x:");
    scanf("%f", &x);
    puts("-----------------------");
    puts("Digite o valor de y:");
    scanf("%f", &y);
    puts("-----------------------");
    float soma = x + y;
    return soma;
}
float Multi() {
    float x, y;
    puts("Digite o valor de x:");
    scanf("%f", &x);
    puts("-----------------------");
    puts("Digite o valor de y:");
    scanf("%f", &y);
    puts("-----------------------");
    float multiplicacao = x * y;
    return multiplicacao;
}
float Div() {
    float x, y;
    puts("Digite o valor de x:");
    scanf("%f", &x);
    puts("-----------------------");
    puts("Digite o valor de y:");
    scanf("%f", &y);
    puts("-----------------------");
    float divisao = x / y;
    float resto = x - ((int)(x / y) * y);
    printf("O resto é: %.2f\n", resto);
    return divisao;
}
