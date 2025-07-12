/*Christian Aruba
COSC 1336 001
1/24/2023
Purpose: Test input and output in C (Lab2L1)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAX_RATE 0.0625
#define COPY_PRICE .05

int main() {
	double x, y, result, total;
	int numCopies; 
	char first, last; 
	
	//prompt the user for their first and last initial
	printf("Please enter the first and last initial separated by a space: ");
	

	//read the initials and store in first and last
	scanf("%c %c", &first, &last);

	//prompt the user for values for x & y
	printf("Please enter the values for x and y separated by a space (decimals are allowed): ");

	//read the values and store in x & y
	scanf("%lf %lf,", &x, &y);
	//add an assignment statement to assign the following formula to result 
	result = (((5 * x) + 6) / 4) - (16 / (x * y - 4));
	//output the values of x, y, and result in the following format:
	
	//Value of x: 2.50	 Value of y: 6.40	Result:3.29
	printf("Value of x: %.2f\tValue of y: %.2f\tResult: %.2f\n",
		x, y, result);
	//so that if the values stored in x, y, and result 
	//are 2.5, 6.4, 3.29157 output would look like the following:

	//Value of x: 2.50     Value of y: 6.40     Result: 3.29

	//test your program with three sets of data and verify 
	//the results with a calculator. record the values for all 
	//three sets in comments below the output statement.

	//the next section will determine the total charges at a copy center.

	//prompt and read the number of numCopies
	printf("Please enter the number of copies: ");
	scanf("%d", &numCopies);
	//store in total the number copies * COPY_PRICE (5 cents a copy)
	total = numCopies * COPY_PRICE;
	//store in total the current value of 
	//total + total * TAX_RATE (adding tax)

	total = total + total * TAX_RATE;

	//output the initials of the user, number of copies,
	//and the total in a meaningful way.

	printf("%c%c, The number of copies you had is %d.\nYour total price is $%.2f",first,last,numCopies,total);
}

//Value of x: 6.80        Value of y: 7.00        Result: 9.63
//Value of x: 11.60       Value of y: 2.90        Result: 15.46
//Value of x : 5.60        Value of y : 7.80        Result : 8.10