#include <stdio.h>


int main(){

int p ,q;

printf("digite dois valores:");
scanf("%i" ,&p);
scanf("%i" ,&q);

//e//
printf("%i && %i=%i\n" ,p,q,p&&q);
//ou//
printf("%i !! %i=%i\n" ,p,q,p||q);
//nao//
printf("%i=!%i\n" ,p, !q);
printf("%i=!%i\n" ,q, !p);


return 0;    
}