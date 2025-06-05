#include <stdio.h>

int main() {
  
int n, anterior = 0, proximo = 1;
    
    
printf("Digite quantos números da sequência de Fibonacci deseja gerar: ");
scanf("%d", &n);
printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);
    
for(int i = 0; i < n; i++) {
  printf("%d", proximo);
   if(i < n - 1) {
    printf(", ");
   }
  int auxiliar = proximo;
  proximo = anterior + proximo;
  anterior = auxiliar;
}
    
printf("\n"); 
    
    return 0;
}