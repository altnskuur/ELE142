#include "main.hpp"

int main(){

    const int durum_num = 1000;
    Durum *p_durum = new Durum[durum_num];
    *p_durum = Durum(50,70); 
    (p_durum+1)->x1 = 80; (p_durum+1)->x2 = 10;

    Sistem sys1(1.95, 0.007, -0.003, 1.95), sys2(-0.99, 0, 0, -0.98);

    canvas cizim("State-Space");
    cizim.startDoc();
    cizim.drawFrame();

    cizim.drawLine((p_durum)->x1, (p_durum)->x2, (p_durum+1)->x1, (p_durum+1)->x2);
    for(int iter = 0; iter < (durum_num - 2); iter++){

        *(p_durum+iter+2) = state_space(p_durum+iter, sys1, sys2);
        cizim.drawLine((p_durum+iter+1)->x1, (p_durum+iter+1)->x2, (p_durum+iter+2)->x1, (p_durum+iter+2)->x2);
        std::cout << (p_durum+iter)->x1 << ", " << (p_durum+iter)->x2 << std::endl;
    }
    cizim.finishDoc();

    delete[] p_durum;

    return 0;
}

Durum Durum::vectoral_sum(Durum durum_var) const{

    durum_var.x1 = durum_var.x1 + this->x1;
    durum_var.x2 = durum_var.x2 + this->x2;
    return durum_var;
}

Durum Sistem::matrix_prod(Durum durum_var) const{

    Durum out_var;
    out_var.x1 = this->k11 * durum_var.x1 + this->k12 * durum_var.x2;
    out_var.x2 = this->k21 * durum_var.x1 + this->k22 * durum_var.x2;
    return out_var;
}

Durum state_space(Durum durum_var[], Sistem sys1, Sistem sys2){

    Durum var1, var2, out_var;
    var1 = sys1.matrix_prod(durum_var[0]);
    var2 = sys2.matrix_prod(durum_var[1]);
    out_var = var1.vectoral_sum(var2);
    return out_var;
}