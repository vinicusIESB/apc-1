#include <stdio.h>
#include <string.h>

int main() {
    // e) Declara as variáveis primeiro_nome e ultimo_nome
    char primeiro_nome[11];
    char ultimo_nome[11];
    
    // f) Lê os valores para as variáveis
    printf("Digite o primeiro nome (max 10 caracteres): ");
    scanf("%s", primeiro_nome);
    
    printf("Digite o último nome (max 10 caracteres): ");
    scanf("%s", ultimo_nome);
    
    // g) Declara a variável nome
    char nome[31];
    
    // h) Copia o primeiro nome para a variável nome
    strcpy(nome, primeiro_nome);
    
    // i) Concatena um espaço em branco
    strcat(nome, " ");
    
    // j) Concatena o último nome
    strcat(nome, ultimo_nome);
    
    // k) Imprime o nome completo
    printf("Nome completo: %s\n", nome);
    
    return 0;
}