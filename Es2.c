#include <stdio.h>

int main(){
	
	/*Variabili Utilizzate*/	
	float n, m, media;


	/*Nuemri da inserire da parte del user*/
	printf("Inserisci un numero\n");
	scanf("%f", &n);

	printf("Inserisci un secondo numero\n");
	scanf("%f", &m);

//	somma = numero1 + numero2;
	media = (n + m)/ 2;
	printf("Media: %6.1f\n", media);
	
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
