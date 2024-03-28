#include <stdio.h>

float Soma();

int main(){
    float resultado = Soma();
    printf("O resultado de soma é: %.2f", resultado);
    return 0;
}

float Soma(){
    float x,y;
    puts("Digite o valor de x:");
    scanf("%f",&x);
    puts("-----------------------");
    puts("Digite o valor de y:");
    scanf("%f",&y);
    puts("-----------------------");
    float soma = x + y;
  return soma;
 }

