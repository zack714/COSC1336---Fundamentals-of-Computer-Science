/*Christian Aruba
* COSC 1336 001
* 3/7/2023
* Purpose: To create a summary of a purchase at a music store. (Lab4L4)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LARGE_DISCOUNT_MINIMUM 100
#define SALES_TAX 5

void main() {
	double totalPurchasePrice;
	char isTeacher;
	//input
	printf("Please enter the total purchase price: ");
	scanf("%lf", &totalPurchasePrice); 
	printf("Please enter 'Y' if the purchaser is a teacher: ");
	scanf(" %c", &isTeacher);

	//processess and output
	printf("Total Purchases:\t\t$%.2f\n",totalPurchasePrice);
	if (isTeacher == 'Y' || isTeacher == 'y') {
		int discount;
		if (totalPurchasePrice >= LARGE_DISCOUNT_MINIMUM)
			discount = 12;
		else
			discount = 10;
		double discountAmount = (discount * .01) * totalPurchasePrice;
		double discountPrice = totalPurchasePrice - discountAmount; 
		double tax = discountPrice * (SALES_TAX * .01);
		printf("Teacher's discount: (%d%%):\t%.2f\n", discount, discountAmount);
		printf("Discounted Total:\t\t%.2f\n", discountPrice); 
		printf("Sales Tax (%d%%):\t\t\t%.2f\n", SALES_TAX, tax); 
		printf("Total:\t\t\t\t$%.2f\n",discountPrice+tax);
	}
	else {
		//non-teacher case
		double tax = totalPurchasePrice * (SALES_TAX * .01); 
		printf("Sales Tax (%d%%):\t\t\t%.2f\n", SALES_TAX, tax);
		printf("Total:\t\t\t\t$%.2f\n", totalPurchasePrice + tax);
	}
}