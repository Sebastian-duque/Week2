#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	int selezione;
	int i;

	printf("Vuoi iniziare il questo gioco\n");
	printf("Si A o  No B\n");
	scanf("%s", &selezione);
	if(selezione == 'A');/**
	else if(selezione =='B');
	return 0;
	if(selezione == 'B');**/
	else{
	printf("Error\n");
	}
	
/**	printf("Vuoi iniziare il questo gioco\n");
        printf("Si A o  No B\n");
        scanf("%s", &selezione);**/

        char nome[10];
        printf("Inserire il nome\n");
        scanf("%s", &nome);


	printf("Rispondi correttamente alle domande per vincere\n");
	printf(" Inizia\n");
	scanf("%s", &selezione);

	printf("\nQuante persone vivono sul pianeta terra?\n");
        printf("A) 1.000.000\n");
        printf("B) 8.000.000.000\n");
	scanf("%s", &selezione);
	if(selezione == 'B');
	else(selezione == 'A');
	printf("Risposta Sbagliata\n");
	return 0;
	

        printf("I Dinosauri esistono?\n");
        printf("A) No\n");
        printf("B) Si\n");
        scanf("%s", &selezione);
        if(selezione == 'A');
        else{printf("Risposta Sbagliata\n"); 
        }
/**	void partita (){
	char nome[10];
	printf("Inserire il nome\n");
	scanf("%s", &nome);
	}
	**/
}



