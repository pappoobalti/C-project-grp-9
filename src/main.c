#include <stdio.h>
#include <stdlib.h>

#include "loan.h"
#include "memory.h"
#include "fine.h"
#include "reports.h"

int main() {
  
    int count;
    printf("Enter number of loan records: ");
    scanf("%d", &count);
  
    Loan* loans = initializeLoanStorage(count); // Allocate memory for loan list
    if (loans == NULL) {
        printf("Memory allocation failed...\n");
        return 1;
    }
    for (int i = 0; i < count; i++) {
        printf("\n--- Enter details for Loan %d ---\n", i + 1);
        inputLoan(&loans[i]);
    }
  
    printf("\n====All Loan details====\n"); // Display all loan entries
    for (int i = 0; i < count; i++) {
        displayLoan(loans[i]);
    }

    showDefaulters(loans, count); // Generate reports
    showTotalAmount(loans, count);

    int idx, delay; //Calculate fine for any loan
    printf("\nEnter loan index (0 to %d) to calculate fine: ", count - 1);
    scanf("%d", &idx);

    printf("Enter delayed months: ");
    scanf("%d", &delay);

    float fine = calculateFine(loans[idx].amount, delay);
    printf("Fine for %s = %.2f\n", loans[idx].borrowerName, fine);
    free(loans);// Free allocated memory
    return 0;
}
