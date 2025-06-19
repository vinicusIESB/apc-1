#include <stdio.h>

int main() {
    // d) Declaração do array para armazenar as notas
float notas[10];
    
    // e) Declaração das variáveis para soma e média
float soma = 0.0f, media;
    
    // f) Declaração da variável para contar alunos acima da média
int qtde_acima_media = 0;
    
    // g) Loop para ler as 10 notas
printf("Digite as notas dos 10 alunos:\n");
for(int i = 0; i < 10; i++) {
        // h) Leitura de cada nota
printf("Nota do aluno %d: ", i+1);
scanf("%f", &notas[i]);
        
        // i) Acumula a soma das notas
soma += notas[i];
}
    
    // j) Cálculo da média
media = soma / 10;
    
    // k) Loop para verificar quantos estão acima da média
for(int i = 0; i < 10; i++) {
        // l) Verifica se a nota está acima da média
if(notas[i] > media) {
            qtde_acima_media++;
}
}
    
    // m) Imprime os resultados
printf("\nMédia da turma: %.2f\n", media);
printf("Quantidade de alunos acima da média: %d\n", qtde_acima_media);
    
return 0;
}