#include <iostream>

/* CLASS */
/* 
* user defined data type (like int, short, float etc.)
* this data type has includes variables, and functions -> ENCAPTULATION
* CLASS = { member variables, member functions, methods} -> must not all of them 
* member types:
* - public: datas under this member type can accessable and changable from another/different classes/funtions.
* - private: datas under this member type can only accessable and changable from this class and function of this class
* 
*/

class Vector{ // class decleration

    public: // member type, member decleration

    /* CONSTRUCTORS */
    Vector() = default;
    // Vector(double X) : x(X) {}; // constructor overloading 
    Vector(double X, double y, double z) : x{X}, y{y}, z{z} { }; // constructor overloading
    Vector(double x, double y) : Vector(x, y, 0) { };
    
    /* MEMBER FUNCTIONS */
    double getX(void);
    void setX(double x);
    double& set_getY(void); 
    /* SETTER AND GETTER FUNCTIONS IN ONE FUNCTION
    *  usage:
    *  set_getY() = 10.2; -> set meaning 
    *  set_getY(); -> get meaning 
    *  double& -> referance gives a change for changing value. 
    *             function returns an original version of that return variable.
    *  double -> function returns a copy of that return variable. 
    */
    double getY(void) const; // const function means cannot change any of variable that is member of that function even with non-const functions

    Vector add(Vector);

    private: // member type, member decleration

    double x, y;
    double z = 0;
};

double Vector::getX(void) {

    return x;
}

void Vector::setX(double x) {

    this->x = x;
}

double& Vector::set_getY(void) {

    return y;
}

double Vector::getY(void) const {

    // x = 0; // ERROR! function is const. member cannot change in this function
    // setX(); // ERROR! function is const. non-const function cannot call in this function
    return y;
}

Vector Vector::add(Vector vec) {

    this->x += vec.x;
    this->y += vec.y;
    return *this; // returns this pointer values / copys
}
