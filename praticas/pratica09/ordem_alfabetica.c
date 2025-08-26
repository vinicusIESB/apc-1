#include <stdio.h>
#include <string.h>

int main() {
    // e) Declara as variáveis palavra1 e palavra2
    char palavra1[11];
    char palavra2[11];
    
    // f) Lê os valores para as variáveis
    printf("Digite a primeira palavra (max 10 caracteres): ");
    scanf("%s", palavra1);
    
    printf("Digite a segunda palavra (max 10 caracteres): ");
    scanf("%s", palavra2);
    
    // g) Verifica a ordem alfabética com strcmp()
    if (strcmp(palavra1, palavra2) >= 0) {
        // h) Se condição verdadeira: imprime palavra2 primeiro
        printf("Ordem alfabética: %s %s\n", palavra2, palavra1);
    } else {
        // h) Se condição falsa: imprime palavra1 primeiro
        printf("Ordem alfabética: %s %s\n", palavra1, palavra2);
    }
    
    return 0;
}