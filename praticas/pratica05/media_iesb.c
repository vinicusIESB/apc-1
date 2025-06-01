#include <stdio.h>

int main(){

float a1 ,a2 ,media;

printf("digite a primeira nota:");
scanf("%f" ,&a1);
printf("digite a segunda nota:");
scanf("%f" ,&a2);

media = (a1*0,4+a2*0,6);

printf("A1 = %5.1f\n" ,a1);
printf("A2 = %5.1f\n" ,a2);
printf("media = %5.1f\n" ,media);




return 0;
}