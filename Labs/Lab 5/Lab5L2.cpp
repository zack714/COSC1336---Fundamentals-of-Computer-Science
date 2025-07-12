/*Christian Aruba
* COSC 1336 001
* 3/28/2023
* Purpose: Build a fraction calculator (Lab5lL2)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

//function prototypes
int getNumerator();
int getDenominator();
int multiply(int item1, int item2);
int add(int item1, int item2); 
void outputProduct(int numerator1, int denominator1, int numerator2, int denominator2);
void outputQuotient(int numerator1,int denominator1,int numerator2,int denominator2);
void outputSum(int numerator1,int denominator1,int numerator2,int denominator2);
void outputDifference(int numerator1,int denominator1,int numerator2,int denominator2);
void printDecimal(int numerator,int denominator);
void printExitMessage();

void main() {
	int response; 
	printf("Please enter 1 for multiply, 2 for divide");
	printf(", 3 for add, 4 for subtract, or 5 for exit: \n");
	scanf("%d", &response);

	while (response != 5) {
		int numerator1 = getNumerator(); 
		int denominator1 = getDenominator(); 
		int numerator2 = getNumerator();
		int denominator2 = getDenominator();

		switch (response) {
		case 1: //multiply
			outputProduct(numerator1, denominator1, numerator2, denominator2);
			break; 
		case 2: //divide
			outputQuotient(numerator1, denominator1, numerator2, denominator2);
			break;
		case 3: //add
			outputSum(numerator1, denominator1, numerator2, denominator2);
			break; 
		case 4: //subtract
			outputDifference(numerator1, denominator1, numerator2, denominator2);
			break;
		default: //invalid input
			printf("Please enter 1, 2, 3, 4, or 5 MORON!\n");
			break; 
		}//end of switch

		//loop update
		printf("Please enter 1 for multiply, 2 for divide");
		printf(", 3 for add, 4 for subtract, or 5 for exit: \n");
		scanf("%d", &response);

	}//end of the while loop (response !=5)
	printExitMessage();
}//end of main

int getNumerator() {
	int numerator;
	printf("Please enter the numerator: ");
	scanf("%d", &numerator);
	return numerator; 
}//end of getNumerator

int getDenominator() {
	int denominator;
	printf("Please enter the denominator (positive integer only): ");
	scanf("%d", &denominator);
	return denominator;
}//end of getDenominator

void outputProduct(int numerator1,int denominator1,int numerator2,int denominator2) {
	int numeratorProduct = multiply(numerator1 , numerator2); 
	int denominatorProduct = multiply(denominator1 , denominator2); 
	printf("%d/%d * %d/%d. The resulting fraction is %d/%d.\n", numerator1, denominator1, numerator2, denominator2, numeratorProduct, denominatorProduct);
	printDecimal(numeratorProduct, denominatorProduct);
}//end of outputProduct

int multiply(int item1, int item2) {
	return item1 * item2; 
}//end of multiply

void printDecimal(int numerator, int denominator) {
	double decimalValue = (double) numerator / denominator;
	printf("The decimal representation of %d/%d is %.2f.\n", numerator, denominator, decimalValue);
}//end of printDecimal

void outputQuotient(int numerator1, int denominator1, int numerator2, int denominator2) {
	int numeratorQuotient = multiply(numerator1, denominator2);
	int denominatorQuotient = multiply(denominator1, numerator2);
	printf("%d/%d / %d/%d. The resulting fraction is %d/%d.\n", numerator1, denominator1, numerator2, denominator2, numeratorQuotient, denominatorQuotient);
	printDecimal(numeratorQuotient, denominatorQuotient); 
}//end of outputQuotient

void outputSum(int numerator1, int denominator1, int numerator2, int denominator2) {
	int numeratorSum = add(multiply(numerator1, denominator2),multiply(denominator1, numerator2));
	multiply(numerator1, denominator2);
	int denominatorSum = multiply(denominator1, denominator2);
	printf("%d/%d + %d/%d. The resulting fraction is %d/%d.\n", numerator1, denominator1, numerator2, denominator2, numeratorSum, denominatorSum);
	printDecimal(numeratorSum, denominatorSum);
}//end of outputSum

void outputDifference(int numerator1, int denominator1, int numerator2, int denominator2) {
	int numeratorDifference = add(multiply(numerator1, denominator2), -multiply(denominator1, numerator2));
	multiply(numerator1, denominator2);
	int denominatorDifference = multiply(denominator1, denominator2);
	printf("%d/%d - %d/%d. The resulting fraction is %d/%d.\n", numerator1, denominator1, numerator2, denominator2, numeratorDifference, denominatorDifference);
	printDecimal(numeratorDifference, denominatorDifference);
}//end of outputDifference 

void printExitMessage() {
	printf("Goodbye!!!!!!!\n");
}//end of printExitMessage

int add(int item1, int item2) {
	return item1 + item2; 
}//end of add