#include <stdio.h>

int main(){
	
	/*Variabili Utilizzate*/	
//	float n, m, media;
	int  media=0;
	int numero;
	int numero2;

	/*Nuemri da inserire da parte del user*/
	printf("Inserisci un numero\n");
	scanf("%d", &numero);

	printf("Inserisci un secondo numero\n");
	scanf("%d", &numero2);

//	somma = numero1 + numero2;
	media = (numero + numero2)/ 2;
	printf("Media: %d\n", media);
	
	return 0;
}


/*
int main(){
        
        Variabili Utilizzate
        float a, b, media;
//      int numero1;
//      int numero2;
//      int somma;

        Nuemri da inserire da parte

        printf("Inserisci un numero\n");
        scanf("%f", &numero1);
        printf("Inserisci un secondo numero\n");
        scanf("%f", &numero2);
//      somma = numero1 + numero2;
        media = (numero1 + numero2)/ 2;
//      printf("Somma: %d && Media: %d\n", somma, media);
        printf("Media: %6.2d\n", media);
//      scanf("%d", &media);
}

*/
