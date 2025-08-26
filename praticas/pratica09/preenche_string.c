#include <stdio.h>

int main() {
    // f) Declara a variável string como matriz de 11 caracteres
    char string[11];
    
    // g) Preenche toda a string com o caractere \0
    memset(string, '\0', sizeof(string));
    
    // h) Declara variável tecla do tipo caractere
    char tecla;
    
    // i) Lê um valor para a variável tecla
    printf("Digite um caractere: ");
    scanf("%c", &tecla);
    
    // j) Preenche as 10 primeiras posições com o valor da tecla
    memset(string, tecla, 10);
    
    // k) Imprime a variável string
    printf("String após preenchimento: %s\n", string);
    
    // l) Preenche as 5 primeiras posições com *
    memset(string, '*', 5);
    
    // m) Imprime a variável string
    printf("String após preenchimento com *: %s\n", string);
    
    // n) Faz a posição 5 receber \0
    string[5] = '\0';
    
    // o) Imprime a variável string
    printf("String após adicionar \\0 na posição 5: %s\n", string);
    
    // p) Loop for de 0 até 10
    printf("Imprimindo caractere por caractere: ");
    for(int i = 0; i < 10; i++) {
        // q) Imprime cada posição da string
        printf("%c", string[i]);
    }
    
    // r) Imprime o caractere \n
    printf("\n");
    
    return 0;
}