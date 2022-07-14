#include  <stdio.h>

int main(){
	/*variabili*/
	int numero=0;
	int incremento=0;
	int decremento=0;
	
	
	decremento= numero - 1;
        incremento= numero + 1;

	printf("inserisci un numero\n");/*Numero da inserire da parte dell'utente*/
	scanf("%d", &numero);

	printf("Incremento: %d\n", &incremento);
	scanf("%d", &incremento);
        printf("Decremento: %n\n", &decremento);
        scanf("%d", &decremento);


}
