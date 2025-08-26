#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // e) Declara as variáveis string, maiusculo e minusculo
    char string[11];
    char maiusculo[11];
    char minusculo[11];
    
    // f) Lê a string
    printf("Digite uma palavra (max 10 caracteres): ");
    scanf("%s", string);
    
    // g) Preenche maiusculo e minusculo com \0
    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));
    
    // h) Loop for que percorre toda a string
    for(int i = 0; i < strlen(string); i++) {
        // i) Converte para maiúsculo e armazena em maiusculo
        maiusculo[i] = toupper(string[i]);
        
        // j) Converte para minúsculo e armazena em minusculo
        minusculo[i] = tolower(string[i]);
    }
    
    // k) Imprime os resultados
    printf("Original: %s\n", string);
    printf("Maiúsculo: %s\n", maiusculo);
    printf("Minúsculo: %s\n", minusculo);
    
    return 0;
}