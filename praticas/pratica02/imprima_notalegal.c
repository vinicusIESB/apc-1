#include <stdio.h>

int main(){
 
 printf("=============================\n");
 printf("         Nota Legal          \n");
 printf("=============================\n");
 printf("Produto       Qnt Valor Unit.\n");
 printf("%s\t%02i\t%6.2f\n", "Camiseta",2,39.99f);
 printf("%s\t%02i\t%6.2f\n", "Meia Social",3,19.99f);
 printf("%-15s\t%02i\t%6.2f\n", "Calca",1,89.90f);
 printf("=============================\n");
 printf("%s:\t%6.2f\n", "Valor:",229.85f);

 


 return 0;
}