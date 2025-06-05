#include <stdio.h>
#include <math.h>  

int main() {
    
int a, b, c;
    
  
printf("Digite os coeficientes a, b e c (separados por espacos): ");
scanf("%d %d %d", &a, &b, &c);
    
   
float delta = b*b - 4*a*c;
    
    
if (delta < 0) {
    printf("A equacao nao tem raizes reais.\n");
} 

else {
  float x1 = (-b + sqrt(delta)) / (2*a);  // Note the parentheses around 2*a
  float x2 = (-b - sqrt(delta)) / (2*a);
  printf("Raizes da equacao:\n");
  printf("x1 = %.2f\n", x1);
  printf("x2 = %.2f\n", x2);
}
    
    return 0;
}