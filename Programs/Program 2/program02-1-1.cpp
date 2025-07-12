/*Christian Aruba
* COSC 1336 001
* 2/28/2023
* Purpose: Develop a program that will convert meters to inches and output both as a result (Program2: Meters to Inches)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCHES_IN_A_METER 39.37

int main() {

	int meters; 
	double inches; 

	//Prompt with “Please input your meters in inches : “
	printf("Please input your meters: ");
	//Read meters
	scanf("%d", &meters);
	//Compute inches = meters * INCHES_IN_A_METER;
	inches =   meters * INCHES_IN_A_METER; 
	//Output “Your meters are “ + meters + ” and your meters as inches are “ + inches + ”.”
	printf("Your meters are %d and your meters as inches are %.2f", meters, inches);
}