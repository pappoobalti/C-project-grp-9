#include "fine.h"
// This calculates late payment fine based on principal amount and delayed time duration.
// A fixed penalty of rate 5% per delayed month is applied.
float calculateFine(float loanprincipal, int delayperiod) {
    float ratePerMonth = 0.05f;  // penalty of 5% each month
    return loanprincipal * ratePerMonth * delayperiod;
}
