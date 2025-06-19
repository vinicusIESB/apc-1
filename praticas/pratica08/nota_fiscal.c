#include <stdio.h>

int main() {
    // d) Variável para o total da nota
float total = 0.0f;
    
    // e) Matriz para armazenar quantidade, preço e total por produto
float nota_fiscal[5][3];
    
    // f) Loop para ler os 5 produtos
printf("Digite a quantidade e o preço de 5 produtos:\n");
for(int i = 0; i < 5; i++) {
        // g) Leitura da quantidade (coluna 0)
printf("Produto %d - Quantidade: ", i+1);
scanf("%f", &nota_fiscal[i][0]);
        
    // h) Leitura do preço unitário (coluna 1)
printf("Produto %d - Preço unitário: ", i+1);
scanf("%f", &nota_fiscal[i][1]);
        
        // i) Cálculo do total por produto (coluna 2)
nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
        
        // j) Acumula no total geral
total = total + nota_fiscal[i][2];
}
    
    // k) Loop para exibir os dados
printf("\nNota Fiscal:\n");
printf("Prod | Quant | Preço Unit | Total\n");
for(int i = 0; i < 5; i++) {
printf("%4d | ", i+1);
        // l) Loop para as 3 colunas de cada produto
for(int j = 0; j < 3; j++) {
            // m) Imprime cada valor
printf("%6.2f | ", nota_fiscal[i][j]);
        }
printf("\n");
}
    
    // n) Imprime o total da nota
printf("\nTotal da nota fiscal: R$ %.2f\n", total);
    
return 0;
}