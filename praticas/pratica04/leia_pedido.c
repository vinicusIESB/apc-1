#include <stdio.h>

int main() {
   
    char produto[21];  
    int quantidade;
    float valor;

 
    printf("Digite o nome do produto (max 20 letras): ");
    scanf("%20s", produto);  

    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);

    printf("Digite o valor unitario: ");
    scanf("%f", &valor);

 
    printf("\n==============================\n");
    printf("         P E D I D O\n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");
    printf("%s\t%3d\t%-1.2f\n", produto, quantidade, valor);  
    printf("==============================\n");

    return 0;
}