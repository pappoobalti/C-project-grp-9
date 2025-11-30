#include <stdlib.h>
#include "memory.h"

// Creates and returns dynamic memory for storing 'count' Loan structures
Loan* initializeLoanStorage(int count) {
    Loan* loanList = (Loan*) malloc(count * sizeof(Loan));
    return loanList;
}
