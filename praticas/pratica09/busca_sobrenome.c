#include <stdio.h>
#include <string.h>

int main() {
    // e) Declara a matriz de strings para nomes
    char nomes[10][101];
    
    // f) Loop para ler os 10 nomes
    printf("Digite 10 nomes completos:\n");
    for(int i = 0; i < 10; i++) {
        printf("Nome %d: ", i + 1);
        // g) Lê cada nome
        scanf(" %[^\n]", nomes[i]);
    }
    
    // h) Declara a variável sobrenome
    char sobrenome[11];
    
    // i) Lê o sobrenome para buscar
    printf("\nDigite o sobrenome para buscar: ");
    scanf("%s", sobrenome);
    
    // j) Variável para controlar se achou algum nome
    int achou = 0;
    
    // k) Loop para buscar o sobrenome em todos os nomes
    printf("\nNomes encontrados com o sobrenome '%s':\n", sobrenome);
    for(int i = 0; i < 10; i++) {
        // l) Verifica se o sobrenome existe no nome atual
        if (strstr(nomes[i], sobrenome)) {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }
    
    // m) Verifica se nenhum nome foi encontrado
    if (achou == 0) {
        printf("Nenhum nome tem o sobrenome!\n");
    }
    
    return 0;
    