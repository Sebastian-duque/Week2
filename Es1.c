#include  <stdio.h>

int main(){
	/*variabili*/
	int numero;
	int incremento;
	int decremento;
	
	/*Numero da inserire da parte dell'utente*/
	printf("inserisci un numero\n");
	scanf("%d", &numero);

	/*Calcoli di incremento/decremento*/
        incremento= numero + 1;
        decremento= numero - 1;

	printf("Incremento: %d && Decremento: %d\n", incremento, decremento);
	
	return 0;

}
