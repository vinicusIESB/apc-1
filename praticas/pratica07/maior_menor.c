#include <stdio.h>

int main() {
   
int numero, maior, menor;


printf("Digite números inteiros (0 para sair):\n");
scanf("%d", &numero);

maior = numero;
menor = numero;

while(numero != 0) {
 if (numero > maior) {
  maior = numero;
 }
 if (numero < menor) {
  menor = numero;
 }
 scanf("%d", &numero);
 }

  
printf("O maior número digitado foi: %d\n", maior);
printf("O menor número digitado foi: %d\n", menor);

return 0;
}