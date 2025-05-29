#include <stdio.h>

int main() {
 
int numero;
    
printf("Digite um número (0 a 9999): ");
scanf("%d", &numero);
    
int milhares, centenas, dezenas, unidades;
    
    
milhares = numero / 1000;
centenas = (numero % 1000) / 100;
dezenas = (numero % 100) / 10;
unidades = numero % 10;
    
   
printf("O número %d é decomposto em %d milhar(es), %d centena(s), %d dezena(s) e %d unidade(s)\n", 
           numero, milhares, centenas, dezenas, unidades);
    
    return 0;
}