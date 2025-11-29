#include <stdio.h>
#include <string.h>
#include "loan.h"
  // Utility function to clear leftover characters from input buffer
static void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
  // Reads all details related to a loan record
void inputLoan(Loan* l) {
    clearBuffer();
    printf("Enter Borrower's Name: ");
    fgets(l->borrowerName, sizeof(l->borrowerName), stdin);
    l->borrowerName[strcspn(l->borrowerName, "\n")] = '\0'; 

    printf("Enter Loan ID: ");
    scanf("%d",&l->loanID);
    clearBuffer();

    printf("Enter Loan amount: ");
    scanf("%f",&l->amount);

    printf("Enter Interest rate (%%): ");
    scanf("%f",&l->rate);

    printf("Enter duration in Months: ");
    scanf("%d",&l->duration);
}
  // Displays the information stored in a Loan structure
void displayLoan(Loan l) {
    printf("\n======Loan Summary======\n");
    printf("Borrower Name     : %s\n", l.borrowerName);
    printf("Loan ID           : %d\n", l.loanID);
    printf("Principal amount  : %.2f\n", l.amount);
    printf("Interest rate     : %.2f%%\n", l.rate);
    printf("Tenure            : %d months\n", l.duration);
    printf("==========================\n");
}

