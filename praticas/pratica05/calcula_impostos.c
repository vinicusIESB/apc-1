#include <stdio.h>

int main() {
    // d) Declaração das constantes
    const float ICMS = 0.17f;       // 17%
    const float COFINS = 0.076f;    // 7,6%
    const float PIS_PASEP = 0.0165f; // 1,65%

    // e) Declaração da variável preco_inicial
    float preco_inicial;

    // f) Leitura do preço inicial
    printf("Digite o preço inicial: ");
    scanf("%f", &preco_inicial);

    // g) Cálculo do valor do ICMS
    float valor_icms = ICMS * preco_inicial;

    // h) Cálculo do valor do COFINS
    float valor_cofins = COFINS * preco_inicial;

    // i) Cálculo do valor do PIS/PASEP
    float valor_pis_pasep = PIS_PASEP * preco_inicial;

    // j) Impressão dos resultados
    printf("\nPreço Inicial..........: R$ %.2f\n", preco_inicial);
    printf("Valor ICMS (17%%).......: R$ %.2f\n", valor_icms);
    printf("Valor COFINS (7,6%%)....: R$ %.2f\n", valor_cofins);
    printf("Valor PIS/PASEP (1,65%%): R$ %.2f\n", valor_pis_pasep);
    
    // Cálculo do preço final (soma de todas as taxas)
    float preco_final = preco_inicial + valor_icms + valor_cofins + valor_pis_pasep;
    printf("Preço Final............: R$ %.2f\n", preco_final);

    return 0;
}



