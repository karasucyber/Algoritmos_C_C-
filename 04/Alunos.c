# include <stdio.h>


int main(void){
    float nota1, nota2, media;
     
     printf("digite a primeira nota: ");
     scanf("%f",&nota1);

      printf("digite a segunda nota: ");
     scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("%.1f", media);
    if(media >= 6){
        printf("aprovado");
    }else 
    if(media < 3 ){
        printf("reprovado");
    }else{
        printf("recuperação");
    }

}