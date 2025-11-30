#ifndef LOAN_H
#define LOAN_H

typedef struct {
    int loanID;
    char borrowerName[50];
    float amount;
    int duration; // in months
} Loan;

#endif


