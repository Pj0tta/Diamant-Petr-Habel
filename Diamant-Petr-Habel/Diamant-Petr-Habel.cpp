#include <stdio.h>
#include <math.h>

int main(void)
{


	int prazdno = 9;
	//horní polovina
	//Napíše mezery před čísla 
	for (int j = 1; j < 9; j++) {
		for (int i = 1; i < prazdno; i++) {
			printf(" ");
		}
		//leva horni cast
		for (int k = j; k >= 1; k--) {
			printf("%d", k);
		}
		//prava horni cast
		for (int k = 2; k <= j; k++) {
			printf("%d", k);
		}
		printf("\n");
		prazdno--;

	}
	//dolní polovina
	prazdno = 0;
	//Napíše mezery před čísla 
	for (int j = 9; j > 0; j--) {
		for (int i = 0; i < prazdno; i++) {
			printf(" ");
		}
		//leva dolni cast
		for (int k = j; k >= 1; k--) {
			printf("%d", k);
		}
		//prava dolni cast
		for (int k = 2; k <= j; k++) {
			printf("%d", k);
		}
		printf("\n");
		prazdno++;
	}

}