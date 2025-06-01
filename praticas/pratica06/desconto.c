#include <stdio.h>


int main(){

float valor_bruto,valor_desconto;

printf("digite o valor:");
scanf("%f",&valor_bruto);

if(valor_bruto<=100.00f){

  valor_desconto=valor_bruto*0.01f;
}

 else if(valor_bruto<=500.00f){

    valor_desconto=valor_bruto*0.05f;
 }

else {
  
  valor_desconto=valor_bruto*0.1f;
}

printf("valor bruto:%0.2f\n",valor_bruto);
printf("valor com desconto:%0.2f",valor_desconto);





return 0;    
}