/*Christian Aruba
* COSC 1336 001
* 4/11/2023
* Purpose: Process car sales information (lab7l2)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_SALESPEOPLE 6

//function prototypes
double getTotal(const double sales[]);
void printPercentage(const double sales[], double total);

void main() {
	double sales[NUM_SALESPEOPLE];
	double total = 0; 
	for (int i = 0; i < NUM_SALESPEOPLE; i++) {
		printf("Please enter the sales for person %d: ", i + 1);
		scanf("%lf", &sales[i]);
	}
	total = getTotal(sales);
	printPercentage(sales,total);
}

double getTotal(const double sales[]) {
	double total = 0; 
	for (int i = 0; i < NUM_SALESPEOPLE; i++)
		total+=sales[i];
	return total; 
}
void printPercentage(const double sales[], double total) {
	printf("Sales Person\t\tPercentage of sales\n");
	for (int i = 0; i < NUM_SALESPEOPLE ; i++)
		printf("Sales Person %d\t\t%.3f%%\n", i + 1, (sales[i] / total) * 100);
	printf("\nTotal sales for event:\t\t$%.2f", total);
}