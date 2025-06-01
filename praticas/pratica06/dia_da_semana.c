#include <stdio.h>



int main (){

int dia;

printf("insira o dia: ");
scanf("%i",&dia);


 switch(dia) {
        case 1: 
            printf("Segunda\n");
            break;
        case 2: 
            printf("Terça\n");
            break;
        case 3: 
            printf("Quarta\n");
            break;
        case 4: 
            printf("Quinta");
            break;
        case 5: 
            printf("Sexta dia de derrubar as torres");
            break;
        case 6: 
            printf("Sabado\n");
            break;
        case 7: 
            printf("Domingo a noite");
            break;        
        default: 
            printf("erro");
    }
    
    return 0;





return 0;    
}