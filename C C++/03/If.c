#include <stdio.h>


int main(void){

  int numero1, numero2, resto;

  printf("insira um número");
  scanf("%d",&numero1);
  resto = numero1 % 2;

  printf("resultado da divisão : %d", resto);

  if(resto == 0){
    printf("par");
  }else{
    printf("impar");
  };

return 0;
}