#include <iostream>

/* FUNCTIONS */
void first_func(void); // declaration

// pass by value
int inc(int value){

    std::cout << "Value incremented in inc function." << std::endl;
    std::cout << "old value that is inside of function: " << value++ << std::endl;
    std::cout << "incremented value that is inside of function: " << value << std::endl;
    return value;
}

// default parameter in function parameters -> int val_3 = 0
int add(int val_1, int val_2, int val_3 = 0){ 

    return (val_1 + val_2 + val_3);
}

// function overloading: same name, different parameter type or count
float add(float val_1, float val_2){

    return (val_1 + val_2);
}
// polymorphism is the name of overloading in a class type. we will examine polymorphism in oop part.

// int add(int val_1, int val_2) // ERROR! Because of the default parameter, this line will give error.
// int add(float val_1, float val_2) // ERROR! Only return type not provides overloading. this line will give error.

// inline function 
inline void print(int value){

    std::cout << value;
}