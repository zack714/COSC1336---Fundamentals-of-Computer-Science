/*Christian Aruba
* COSC 1336 001
* 3/2/2023
* Purpose: To identify what a compressed gas-cylinder holds based on its identifying color (Lab4L3)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char colorLetter; 
	printf("Please enter the first letter of the identifying color ");
	printf("of the cannister: ");
	scanf(" %c", &colorLetter); 

	switch (colorLetter) {
	case 'o':
	case 'O':
		printf("An orange cannister represents ammonia!\n"); 
		break; 
	case 'b':
	case 'B': 
		printf("A brown cannister represents carbon monoxide!\n");
		break; 
	case 'y':
	case 'Y':
		printf("A yellow cannister represents hydrogen!\n");
		break; 
	case 'g':
	case'G': 
		printf("A green cannister represents oxygen!\n");
		break;
	default:
		printf("Contents unknown.\n");
		break;
	}
}