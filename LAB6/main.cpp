#include "main.hpp"

int main(){

    srand(time(NULL));
    Kesir pik(rand()%100, rand()%100);
    const int derinlik = 10;
    for(int i=derinlik; i>0; i--){

        pik = Kesir(1) / pik;
        pik = pik * (i*i);
        pik = pik + (2*i-1);
    }

    pik = Kesir(4) / pik;
    pik.yazdir();
    pik.yazdir(0);

    return 0;
}

void Kesir::sadelestir(void){

    int ebob = 1;
    int min_sayi = (this->pay < this->payda) ? this->pay : this->payda; 
    for(int i = min_sayi; i>0; i--){

        if((this->pay%i==0) && (this->payda%i==0)){

            ebob = i;
            break;
        }
    }

    this->pay   /= ebob;
    this->payda /= ebob;
}

Kesir Kesir::operator+(Kesir ksr) const{

    return Kesir((this->pay*ksr.payda)+(ksr.pay*this->payda), this->payda*ksr.payda);
}

Kesir Kesir::operator-(Kesir ksr) const{

    return Kesir((this->pay*ksr.payda)-(ksr.pay*this->payda), this->payda*ksr.payda);
}

Kesir Kesir::operator*(Kesir ksr) const{

    return Kesir((this->pay*ksr.pay), this->payda*ksr.payda);
}

Kesir Kesir::operator/(Kesir ksr) const{

    return Kesir((this->pay*ksr.payda), this->payda*ksr.pay);
}

Kesir Kesir::operator+(int val) const{

    return Kesir(this->pay+(val*this->payda), this->payda);
}

Kesir Kesir::operator-(int val) const{

    return Kesir(this->pay-(val*this->payda), this->payda);
}

Kesir Kesir::operator*(int val) const{

    return Kesir((this->pay*val), this->payda);
}

Kesir Kesir::operator/(int val) const{

    return Kesir((this->pay), this->payda*val);
}

void Kesir::yazdir(void){

    std::cout << this->pay << ":" << this->payda << std::endl;
}

void Kesir::yazdir(int foo){ 

    std::cout << static_cast<float>(this->pay)/this->payda << std::endl;
}

void test(void){

    Kesir k1(5, 15), k2(1, 6), k3(3);
    k1.yazdir();
    k1 = k1 + k2;
    k1.yazdir();
    k3.yazdir();
    k1 = k3 - k1;
    k1.yazdir();
    k1.yazdir(0);
}