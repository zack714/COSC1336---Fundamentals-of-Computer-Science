/*Christian Aruba
* COSC 1336 002
* 3/23/2023
* purpose: Write a program that will allow a user to add and subtract pairs of integer fractions and
* provide the resulting fraction and the decimal representation as a double with 2 decimal
places.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void outputFraction(int n1, int d1);
double fractionToDecimal(int num, int denom);


int main() {

	int numerator1;
	int denominator1;

	int numerator2;
	int denominator2;

	printf("Please enter a numerator: ");
	scanf("%d", &numerator1);

	printf("Please enter a denominator (zero is not allowed): ");
	scanf("%d", &denominator1);

	printf("Please enter a numerator: ");
	scanf("%d", &numerator2);

	printf("Please enter a denominator (zero is not allowed): ");
	scanf("%d", &denominator2);

	printf("\n");

	int sumFractionNumerator = numerator1 * denominator2 + denominator1 * numerator2;
	int sumFractionDenominator = denominator1 * denominator2; 
	int differenceFractionNumerator = numerator1 * denominator2 - denominator1 * numerator2;
	double sumFractionDecimal = fractionToDecimal(sumFractionNumerator, sumFractionDenominator);
	double differenceFractionDecimal = fractionToDecimal(differenceFractionNumerator, sumFractionDenominator);

	outputFraction(numerator1, denominator1);
	printf(" + ");
	outputFraction(numerator2, denominator2);
	printf(":The resulting fraction is %d/%d.\n", sumFractionNumerator, sumFractionDenominator);
	printf("The decimal representation of %d/%d is %.2f.\n\n", sumFractionNumerator, sumFractionDenominator, sumFractionDecimal);

	outputFraction(numerator1, denominator1);
	printf(" - ");
	outputFraction(numerator2, denominator2);
	printf(":The resulting fraction is %d/%d.\n", differenceFractionNumerator, sumFractionDenominator);
	printf("The decimal representation of %d/%d is %.2f.\n", differenceFractionNumerator, sumFractionDenominator, differenceFractionDecimal);
}

void outputFraction(int n1, int d1) {
	printf( "%d/%d", n1, d1);
}

double fractionToDecimal(int num, int denom) {
	double quotient = (double) num / denom; 
	return quotient; 
}