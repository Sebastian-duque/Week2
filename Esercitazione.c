#include <stdio.h> 

/*
Il Programma dovrebbe compiere la funzione d'assitente digitale
come descritto nelle righe in basso. 
*/


void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{	/*Ho spostato la variabile fuori dal ciclo " do/while" in modo da far funzionare
	la variabile assegnata */
	char scelta = {'\0'};	

	do {//do da l'istreuzione 
	/*Il ciclo do-while è stato inserito in modo tale di dare la possibilità al user di riprovare
		nel caso abbia inserito o schiacciato un tasto per sbaglio */
	menu ();
	scanf ("%c", &scelta);//Ho cambiato %d co %c perchè non corrispondeva con la variabile

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
		return 0;
	}
	
	/*While esegue una espressione in questo caso se l'input inserito
	 non corrisponde ai valori ('A','B' e 'C') inseriti farà ripartire il ciclo*/
	}while ( scelta != 'A' && scelta != 'B' && scelta != 'C');// != non è  uguale a

return 0;

}


void menu ()
{				/*Zero Cambiamenti*/
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	
	/* Qui ho cambiato short int(16 bit) con int perchè il range di int(32 bit) è più grande*/

	int  a,b  = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a);
	scanf ("%d", &b);

	int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        float  a,b = 0; /* Qua ho cambiato int con float perchè dà possibilità di avere numeri
			   non interi nel caso l'utente voglia fare un calcolo
			   aritmetico con risultato un numero periodico.**/
        printf ("Inserisci il numeratore:");
        scanf ("%f", &a);//Qua ho cambiato %d con %f dato che %d era la variabile di int
	printf ("Inserisci il denumeratore:");
        scanf ("%f", &b);

        float divisione = a / b;// Anche qua ho cambiato int con float

	 /** Anche qua ho cambiato %d con %f dato che %d era la variabile di int**/
        printf ("La divisione tra %f e %f e': %f", a,b,divisione);
	


}





void ins_string ()  
{
	char stringa[10];//Qui non ci sono moficiche
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
//} Questo è un errore si sintassi che protrebbe non far funzionare il programma.
