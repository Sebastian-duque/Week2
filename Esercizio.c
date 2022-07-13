#include <stdio.h>
#include <stdlib.h>

int main () {


int scelta;
char user[15];
int conta=0, x=0, y=0, z=0;

printf("\nWelcome to the Game\n");
printf("\nAnswer the Quiz for win the game\n");

do{
printf("\nSelect the option 1 to start the game");
printf("\nSelect the option 2 to extit from the game");
scanf("%d", &scelta)


switch(scelta){

case 1:

printf("\nSelect user name:\n")
scanf("%s", &user);

printf("\nHow many people live on Earth?\n")
printf("\n1) 1.000.000\n")
printf("\n2) 8.000.000.000\n")
scanf("%d",&x)
if(x==2){
conta++
}

printf("\nWhich planet is the older?\n")
printf("\n1) Earth\n") 
printf("\n2) Saturn\n")
printf("\n3) Jupiter\n")
scanf("%d",&y)
if(y==2){
conta++
}
printf("\nHow old is the  Earth?\n")
printf("\n1) 4.540 Billion years\n")
printf("\n2) 8.040 Billion years\n")  
scanf("%d",&z)
if(z==1){
conta++ 
}
printf("\nTotal points of %s is %d", user, conta)
break;
case 2:
break;
}
}while(scelta==1)
return 0;






ho copiato.
