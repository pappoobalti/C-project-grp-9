#include <stdlib.h>
#include "memory.h"
Loan* initializeLoanStorage(int count) {
    return (Loan*) malloc(count * sizeof(Loan));
}
