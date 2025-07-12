/* Christian Aruba
* COSC 1336 001
* 4/4/2023
Purpose: Work some more repetiotion problems (Lab5L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int sum = 0;

	for (int i = 100; i <= 200; i++) {
		sum += i;
	}
	printf("The total of the numbers between 100 and 200 inclusive ");
	printf("is %d.\n", sum);

	do {
		printf("Please enter an integer (positive only).");
		scanf("%d", &sum);
	} while (sum <= 0);

	sum = 0; 
	int count = 0, age = 0; 

	//priming read
	printf("Please enter an age: ");
	scanf("%d", &age); 
	while (age >= 0) {
		sum += age; 
		count++;
	//update the loop. 
	printf("Please enter an age: ");
	scanf("%d", &age);
	}
	printf("The average age is %.2f", (double)sum / count); 
}