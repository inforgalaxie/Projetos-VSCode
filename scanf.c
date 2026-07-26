#include <stdio.h>


int main(){


    char nome[20];
    int idade;
    double numeroreal;

    printf("Insira o seu nome:\n");
    scanf("%19s", nome);

    printf("Insira a sua idade:\n");
    scanf("%d", &idade);

    printf("Insira um numero real:\n");
    scanf("%lf", &numeroreal);

    

    printf("O meu nome: %s\n", nome);
    printf("A minha idade: %d\n", idade);
    printf("O numero real escolhido: %lf\n", numeroreal);



















}