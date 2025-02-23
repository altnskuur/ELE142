#include "main.hpp"

int main(){

    Vector vec1; 
    // Vector vec_e(3); // ERROR! constructor with one paramater is not defined
    // Vector vec_e = 3; // If constructor with one paramater, that can be used with this syntax
    // vec1.x = 20; // ERROR! private variables not accessable in main function
    vec1.setX(12.2); // set private x value
    std::cout << "X val: " << vec1.getX() << std::endl;
    vec1.set_getY() = 10.3; // set private y value. setter and getter methods in one function
    std::cout << "Y val: " << vec1.set_getY() << std::endl;

    Vector vec2, vec_res(0, 0);
    std::cout << "vec_res X-Y val: " << vec_res.getX() << " - " << vec_res.set_getY() << std::endl; 
    vec2.setX(10);
    vec2.set_getY() = 10;
    vec_res = vec1.add(vec2);
    std::cout << "vec1    X-Y val: " << vec1.getX()    << " - " << vec1.set_getY()    << std::endl; 
    std::cout << "vec2    X-Y val: " << vec2.getX()    << " - " << vec2.set_getY()    << std::endl; 
    std::cout << "vec_res X-Y val: " << vec_res.getX() << " - " << vec_res.set_getY() << std::endl; 

    return 0;
}