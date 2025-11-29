#ifndef LOAN_H
#define LOAN_H

typedef struct LoanInfo {
    int loanID;           // Unique loan identifier
    char borrowerName[50]; // Name of the borrower
    float rate;           // Interest rate
    float amount;         // Principal amount
    int duration;         // Duration in months
} Loan;

void inputLoan(Loan* l);// Reads loan details from user
void displayLoan(Loan l);// Displays the stored loan information

#endif

