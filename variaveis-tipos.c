#include <stdio.h>


int main(){

int idade= 45;

char caracter = 'c';

float x = 123.45;

double y= 123780797909.7676;



printf("Variavel idade do tipo inteiro: %i\n",idade);

/* O tipo de variavel char tanto pode ser usado para numeros inteiros pequenos como para caracteres de acordo com a formatação usada*/

printf("Variavel caracter tipo char: %c \n", caracter);

printf("Variavel caracter do tipo int: %d \n",caracter);


/*Variavel do tipo float para valores com casas decimais*/
printf("Variavel do tipo float: %f \n",x);


printf("Variavel do tipo double para numercao cientifica: %g \n",y);

printf("Variavel do tipo double com varias casas decimais: %lf", y) ;   













}