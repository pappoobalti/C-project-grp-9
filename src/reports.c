#include <stdio.h>
#include "reports.h"

// Displays borrowers considered as defaulters based on duration
void showDefaulters(Loan list[], int count) {
    printf("\n--- Defaulters List ---\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        // Example rule: loans exceeding 12 months are treated as defaulted
        if (list[i].duration > 12) {
            printf("%s (Loan ID: %d) has defaulted.\n",
                   list[i].borrowerName,
                   list[i].loanID);
            found = 1;
        }
    }
    if (!found) {
        printf("No defaulters found.\n");
    }
}
// Sums up the total sanctioned amount from all loan records
void showTotalAmount(Loan list[], int count) {

    float total = 0.0f;
    for (int i = 0; i < count; i++) {
        total += list[i].amount;
    }
    printf("\nTotal Loan Amount Issued: %.2f\n",total);
}
