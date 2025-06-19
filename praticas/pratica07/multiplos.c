# include <stdio.h>



int main(){

int numero;

printf("digite o numero:");
scanf("%i"  ,&numero);

for (int i=1;i<101;i++){
 if (i % numero==0){
  printf("%i\n" ,i);
  }
   
}

return 0;    
}