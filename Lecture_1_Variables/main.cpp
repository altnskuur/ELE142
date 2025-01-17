#include "main.h"

int main() {
    /* WRAP AROUND EXCEPTION */
    sh_var = 32535; // max value for short variables
    std::cout << "short variable value: " << sh_var << std::endl;
    sh_var = sh_var + 1; // exceed the maximum limit -> WRAP AROUND EXCEPTION. now sh_var value is -32536 
    // sh_var = 32524 -> 32524
    // sh_var = sh_var + 1 -> 32525 (MAX VALUE)
    // sh_var = sh_var + 1 -> -32536 (MIN VALUE)
    // sh_var = sh_var + 1 -> -32535
    std::cout << "short variable value incremented by one: " << sh_var << std::endl;
    
    ui_var = 0;
    std::cout << "unsigned int variable value: " << ui_var << std::endl; // OUTPUT: 0
    ui_var--;
    std::cout << "unsigned int variable value decrement by one: " << ui_var << std::endl; // OUTPUT: 4.3 billion

    /* CONST */
    // consti_var = 23; // ERROR!! Cannot change const variables

    /* DEFINE */
    std::cout << "Last Year: " << this_year - DEC_1 << std::endl;

    /* NAMESPACE */
    resistor1::digit1st   = BROWN;
    resistor1::digit2nd   = ORANGE;
    resistor1::multiplier = RED;
    resistor1::tolerance  = GOLD;

    /* USING */
    digit1st   = GREEN;
    digit2nd   = RED;
    multiplier = ORANGE;
    tolerance  = SILVER;

    color digit1st = BROWN; // new variable
    // after this implementation, you need to emphasise which digit1st is this
    std::cout << "digit1st that initialize in main: " << digit1st << std::endl;
    std::cout << "digit1st that initialize in namespace resistor2: " << resistor2::digit1st << std::endl;
    

    return 0;
}