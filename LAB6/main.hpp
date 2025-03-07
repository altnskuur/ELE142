#include <iostream>

class Kesir{

    public:

    Kesir(int pay) : pay{pay}, payda{1} { };
    Kesir(int pay, int payda) : pay{pay}, payda{payda} { sadelestir(); };
    Kesir operator+(Kesir ksr) const;
    Kesir operator-(Kesir ksr) const;
    Kesir operator*(Kesir ksr) const;
    Kesir operator/(Kesir ksr) const;
    
    Kesir operator+(int val) const;
    Kesir operator-(int val) const;
    Kesir operator*(int val) const;
    Kesir operator/(int val) const;
    void sadelestir(void);
    void yazdir(void);
    void yazdir(int foo);
    
    private:

    long long pay, payda;

};