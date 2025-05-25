#include <stdio.h>


int main(){

int matricula;
float a1,a2,media;


printf("digite a matricula:");
scanf("%d"  ,&matricula);
printf("digite a primeiras nota:");
scanf("%f"  ,&a1);
printf("digite a segunda nota:");
scanf("%f"  ,&a2);

media = (a1+a2)/2;

printf("Boletim de Notas:\n");
printf("Matricula:\tA1:\tA2:\tMedia:\n");
printf("%5d\t%10.2f\t%2.2f\t%2.2f\n"  ,matricula,a1,a2,media );






return 0;

}