#include <stdio.h>


int main(){

int numero1 ,numero2;
float numero3;

printf("Digite um número inteiro: ");
scanf("%i", &numero1);
printf("Digite outro número inteiro: ");
scanf("%i", &numero2);
printf("Digite um número flutuante: ");
scanf("%f", &numero3);

int soma = numero1+numero2;

printf("a soma de %i com %i é igual a %i\n"   ,numero1,numero2,soma);

int subtracao = numero1-numero2;

printf("a subtraçao de %i com %i é igual a %i\n"   ,numero1,numero2,subtracao);

int multiplicacao = numero1*numero2;

printf("a multiplicaçao de %i com %i é igual a %i\n"   ,numero1,numero2,multiplicacao);

int divisao = numero1/numero2;

printf("a divisao de %i com %i é igual a %i\n"   ,numero1,numero2,divisao);

int resto = numero1%numero2;

printf("o resto da divisao de %i com %i é igual a %i\n"   ,numero1,numero2,resto);

int divisaofracionada = numero1/numero3;

printf("a divisao fracionada de %i com %i é igual a %i\n"   ,numero1,numero3,divisaofracionada);

return 0;    
}