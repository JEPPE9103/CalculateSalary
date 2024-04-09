#include <stdio.h>
#include "safeinput.h"
#include "calculateSalary.h"


int main(){

   float monthlySalary;

    printf("Enter you monthly salary: ");
    scanf(" %f", &monthlySalary);

    float taxRate = calculateTaxSalary(monthlySalary);

    printf("The calculated tax rate is: %.2f\n", taxRate);

    return 0;
}