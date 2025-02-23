#include <iostream>
#include "canvas.cpp"

class Durum{

    public:
    
    //  x1
    // [  ]
    //  x2
    double x1, x2; 
    Durum() = default;
    Durum(double x1, double x2) : x1{x1}, x2{x2} { };
    Durum vectoral_sum(Durum durum_var) const;
    
};

class Sistem{

    public:
    
    //  k11 k12
    // [       ]
    //  k21 k22
    double k11, k12, k21, k22;
    Sistem(double k11, double k12, double k21, double k22) : k11{k11}, k12{k12}, k21{k21}, k22{k22} { };
    Durum matrix_prod(Durum durum_var) const;
};

Durum state_space(Durum durum_var[], Sistem sys1, Sistem sys2);