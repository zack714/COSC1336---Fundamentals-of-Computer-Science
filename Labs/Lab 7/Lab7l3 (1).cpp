/*Christian Aruba
* COSC 1336 001
* 4/11/2023
* Purpose: Collect and display basic baseball stats using parallel arrays (lab7l3)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int numberOfPlayers;
	int hits[99];
	int atBats[99];
	printf("Please enter the number of players: ");
	scanf("%d", &numberOfPlayers); 
	for (int i = 0; i<numberOfPlayers; i++) {
		printf("Please enter the number of hits for player %d: ", i+1);
		scanf("%d", &hits[i]);
		printf("Please enter the number of \"at bats\" for player %d: ", i + 1); 
		scanf("%d", &atBats[i]); 
	}
	printf("\nPlayer Number\tHits\tAt Bats\n");
	for (int i = 0; i < numberOfPlayers; i++)
		printf("%d\t\t%d\t%d\n",i+1,hits[i],atBats[i]);

	//part 2
	double battingAverage[99];
	for (int i = 0; i<numberOfPlayers; i++)
		battingAverage[i] = (double) hits[i] / atBats[i];
	printf("\nPlayer Number:\tHits:\tAt Bats:\tBatting Average\n");
	for (int i = 0; i < numberOfPlayers; i++) {
		printf("%d\t\t%d\t%d\t%.3f%%\n", i + 1, hits[i], atBats[i], battingAverage[i]);
	}

	//part 3
	printf("\nExcellent Batters:\n");
	printf("\nPlayer Number:\tHits:\tAt Bats:\tBatting Average\n");
	for (int i = 0; i < numberOfPlayers; i++) 
		if(battingAverage[i]>.300)
			printf("%d\t\t%d\t%d\t%.3f%%\n", i + 1, hits[i], atBats[i], battingAverage[i]);
}
