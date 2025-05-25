#include <stdio.h>


int main() {


char tecla;

printf("digite uma tecla: ");
scanf("%c", &tecla);
printf("voce digitou: %c\n"  ,tecla);

char nome[31];

printf("digite seu nome:");
scanf("%s" ,nome);
printf("voce digitou: %s\n", nome);


return 0;    
}