/*Christian Aruba
COSC 1336 001
3/2/2023
Purpose: To print out an appropriate slippery roads message*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//function prototypes
void isSlippery();

void main() {
	char sForSlippery; 
	printf("Please enter an 'S' if the road is slippery: ");
	scanf(" %c", &sForSlippery);
	if (sForSlippery == 's' || sForSlippery == 'S')
	{
		isSlippery();
	}
	else
		printf("Road conditions normal. Drive like you are running from the law!");
}

void isSlippery() {
	double temperature;
	printf("Please enter the temperature in Fahrenheit: ");
	scanf("%lf", &temperature);
	if (temperature > 32) {
		printf("Wet roads ahead! Stopping time doubled!");
	}else
		printf("Icy roads ahead! Be very careful!");
}