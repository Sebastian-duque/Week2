#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        
        /*Variabili Utilizzata*/        

        int numero;

        /*Nuemro da inserire da parte del user*/
        printf("Inserisci un numero\n");
        scanf("%d", &numero);
	/*Calcolo*/
	if(numero >= 0){
	printf("Numero positivo\n");//Risposta
	}
	else{
	printf("Numero negativo\n");
	}
	
        
        return 0;
}
