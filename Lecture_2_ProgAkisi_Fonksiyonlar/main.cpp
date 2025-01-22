#include "main.h"

int int_val = 10; // global variable: accessible for every code block 

int main() {

    std::cout << "***Condition Blocks***" << std::endl;
    if(int_val < 17){

        std::cout << "inside of the if block" << std::endl;
    } else {

        std::cout << "inside of the else block" << std::endl;
    }

    int_val < 13 ? std::cout << "one line condition block if true" << std::endl : std::cout << "one line condition block if false" << std::endl;

    switch(int_val < 17) {

        case true:
            std::cout << "inside of the switch-case block if its true" << std::endl;
            break;

        case false:
            std::cout << "inside of the switch-case block if its false" << std::endl;
            break;
    }

    std::cout << std::endl << "***While-Loop***" << std::endl;
    int iteration = 0; // local variable: accessible for only between brackets
    while(int_val < 17){

        std::cout << "iteration: " << ++iteration << std::endl;
        if(6 == iteration){

            std::cout << "reached maximum iteration number" << std::endl;
            break;
        } else if(3 == iteration) {

            std::cout << "iteration number is 3, incremention is cancelled." << std::endl << "int_val: " <<  int_val << std::endl;
            continue;
        }
        std::cout << "new int_val: " << ++int_val << std::endl;
    }

    int int_val = 500;
    std::cout << std::endl << "local int_val: " << int_val << std::endl;
    std::cout << "global int_val: " << ::int_val << std::endl;

    std::cout << std::endl << "***Functions***" << std::endl;
    first_func(); // calling

    int_val = inc(int_val);
    std::cout << "int_val value that is outside of func: " << int_val << std::endl;

    std::cout << "3 + 5 = " << add(3, 5) << std::endl;
    std::cout << "3 + 5 + 7 = " << add(3, 5, 7) << std::endl;
    std::cout << "3.3 + 5.5 = " << add((float) 3.3, (float) 5.5) << std::endl;

    std::cout << "inline function: ";
    print(int_val);
    
    return 0;
}

// definition
void first_func(void){

    std::cout << "inside of first_func" << std::endl;
}