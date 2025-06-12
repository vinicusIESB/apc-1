#include <stdio.h>

int main() {
    
char frase[31];
    
   
printf("Digite uma frase (até 30 caracteres): ");
scanf("%c30[^\n]", frase);  
    
    
char matriz[6][5];
    
    
int k = 0;
    
    
for(int i = 0; i < 6; i++) {
       
for(int j = 0; j < 5; j++) {
            
matriz[i][j] = frase[k];
            
k++;
            
            
if(frase[k] == '\0') {
matriz[i][j] = ' ';
}
}
}
    
    
printf("\nA transposicao da frase eh:\n");
    
    
for(int j = 0; j < 5; j++) {
        
for(int i = 0; i < 6; i++) {
            
printf("%c", matriz[i][j]);
 }
}
printf("\n");
    
return 0;
}