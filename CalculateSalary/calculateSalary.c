 #include <stdio.h>
 #include "safeinput.h"
 
 
 float calculateTaxSalary(float salary) {

        if(salary >= 30000) return salary * 0.22;
        if(salary < 15000) return salary * 0.12;
        return salary * 0.28;
    }
