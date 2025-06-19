#include <stdio.h>

int main() {
    
int numero;
    
printf("Digite um número decimal (0-255): ");
scanf("%d", &numero);
    
int decimal = numero;

printf("%d em binário: ", numero);

for(int i = 128; i > 0; i = i / 2) {
    int bit = decimal / i;
    printf("%d", bit);
    decimal = decimal - bit * i;
    }

printf("\n");
return 0;
}