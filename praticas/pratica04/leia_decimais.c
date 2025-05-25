#include <stdio.h>


int main(){

float preco;


printf("Digite um preço: ");
scanf("%f", &preco);
printf("Você digitou: %.2f\n", preco);


double fracao;


printf("Digite uma fração: ");
scanf("%lf", &fracao);
scanf("voce digitou: %.5d\n" ,fracao);



return 0;    
}