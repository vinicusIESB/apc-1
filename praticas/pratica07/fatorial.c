# include <stdio.h>



int main(){

int numero;
int fatorial=1;

printf("digite o numero:");
scanf("%i"  ,&numero);

for (int i=numero; i>0; i--){
  fatorial = fatorial*i;
 }

printf("o numero foi:%i,ja o seu fatorial eh %i"  ,numero,fatorial);

return 0;    
}