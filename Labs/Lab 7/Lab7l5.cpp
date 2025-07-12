/*Christian Aruba
* COSC 1336 001
* 4/13/2023
* Purpose: Respond to queries about seasons (lab7l5)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum {winter,spring,summer,fall} Season;

//function prototypes
void displaySeason(Season input);


void main() {
	Season input; 
	int count = -1;
	do {
		printf("Please enter an integer representing a season: ");
		scanf("%d", &input);
		displaySeason(input);
		count++;
	} while (input >= winter && input <= fall);
	printf("The total count is %d.\n", count);
}

void displaySeason(Season input) {
	switch (input) {
	case winter:
		printf("The season is winter.\n");
		break;
	case summer:
		printf("The season is summer.\n");
		break;
	case spring:
		printf("The season is spring.\n");
		break;
	case fall:
		printf("The season is fall.\n");
		break; 
	}
}