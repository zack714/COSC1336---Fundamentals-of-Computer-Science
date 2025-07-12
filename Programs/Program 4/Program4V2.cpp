/*Christian Aruba
* COSC 1336 001
* 4/7/2023
* Purpose: Write a banking application where a user will enter their current balance and a transaction. (Program04:Bank Application)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define OVERDRAFT_FEE 25

void main() {
	double currentBalance;
	double newBalance;
	double transaction;
	double overdraftFee = OVERDRAFT_FEE;
	printf("Please enter your current balance and the amount of your transaction, separated by a space: ");
	scanf("%lf %lf", &currentBalance, &transaction);

	newBalance = currentBalance + transaction;


	if ((newBalance) > 0) {
		if (transaction > 0) {
			printf("\nYour previous balance was $%.2f\n\n", currentBalance);
			printf("You performed a deposit of $%.2f\n\n", transaction);
			printf("Your new balance is $%.2f\n", newBalance);
		}
		else if (transaction < 0) {
			printf("\nYour previous balance was $%.2f\n\n", currentBalance);
			printf("You performed a withdraw of $%.2f\n\n", transaction);
			printf("Your new balance is $%.2f\n", newBalance);
		}
	}//overdraft case below
	else if (newBalance < 0) {
		double overdraftBalance = newBalance - OVERDRAFT_FEE; 
		printf("\nYour previous balance was $%.2f\n\nYou preformed a withdraw of $%.2f\n\nYou've overdrafted, fee applicable: $%.2f\n\nYour new balance is $%.2f\n",
			currentBalance,transaction,overdraftFee,overdraftBalance);
	}
	if (newBalance == 0) {
		printf("\nYour new balance is $0.00. You are now broke.\n");
	}
}