#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(0));

int randomnumber;
randomnumber = (rand() %3)+1;

	if (randomnumber ==1){
		printf("Lok'Tar Ogar!\n"); 	//"Victory or Death." in orcish
	}
	else if (randomnumber==2){
		printf("For The Horde\n");
	}
	else{
		printf("Aka'magosh\n"); 	// "A blessing on you and yours." in orcish
	}


	return 0;
}
