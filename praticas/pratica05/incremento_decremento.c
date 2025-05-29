# include <stdio.h>

int main() {

int numero;

printf("digite um numero inteiro:");
scanf("%i"  ,&numero);

int incremento = numero;
int decremento = numero;

printf("numero: %i\n" ,numero);
printf("o pre-incremento de %i e %i:\n"  ,numero ,++incremento);
printf("o pre-decremento de %i e %i:\n"  ,numero ,--decremento);
printf("o pos-incremento de %i e %i:\n", numero, incremento++);
printf("o pos-decremento de %i e %i:\n", numero, decremento--);


return 0;    
}