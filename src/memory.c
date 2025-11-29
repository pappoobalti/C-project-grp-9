#include <stdlib.h>
#include "memory.h"

// Creates and returns dynamic memory for storing 'n' Loan structures
Loan* createLoanArray(int n) {
    Loan* loanList = (Loan*) malloc(n * sizeof(Loan)); // Allocate memory for n Loan items
    return loanList; // Returns the allocated memory to the caller
}
