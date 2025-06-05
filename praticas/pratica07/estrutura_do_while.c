# include <stdio.h>



int main(){

int nota;
 
do {

printf("digite sua nota:");
scanf("%i"  ,&nota);
 if (nota<1 || nota>10){
  printf("nota invalida! tente novamente:");
  
 }
 }

while(nota<1 || nota>10);








return 0;    
}