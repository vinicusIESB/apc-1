#include <stdio.h>
#include <string.h>

int main() {
    // e) Declara a variável frase
    char frase[31];
    
    // f) Lê a frase
    printf("Digite uma frase (max 30 caracteres): ");
    scanf(" %[^\n]", frase); // Lê até a quebra de linha
    
    // e) Declara a variável letra
    char letra;
    
    // g) Lê a letra
    printf("Digite a letra que deseja contar: ");
    scanf(" %c", &letra); // Espaço antes do %c para ignorar quebras de linha
    
    // h) Declara e inicializa a variável quantidade
    int quantidade = 0;
    
    // i) Loop for que percorre toda a frase
    for(int i = 0; i < strlen(frase); i++) {
        // j) Verifica se a letra na posição i é igual à letra procurada
        if (frase[i] == letra) {
            quantidade++;
        }
    }
    
    // k) Verifica se a letra foi encontrada e imprime o resultado
    if (quantidade > 0) {
        printf("A letra '%c' aparece %d vezes na frase.\n", letra, quantidade);
    } else {
        printf("A frase não contem a letra!\n");
    }
    
    return 0;
}