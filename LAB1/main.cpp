#include <iostream>

bool inside(int X, int Y, int R);
bool inside(int X, int Y, int Z, int R);

int main() {

    int icerde = 0;
    srand(time(NULL));

    /* UYGULAMA I */
    const int yaricap_1 = 500;
    const int deney_sayisi_1 = 1000;
    for(int i = 0; i < deney_sayisi_1; i++){

        int X = rand() % yaricap_1;
        int Y = rand() % yaricap_1;
        if(true == inside(X, Y, yaricap_1)){

            icerde++;
        }
    }
    std::cout << "Daire icine düsen rastgele noktalar: " << icerde << std::endl;
    std::cout << "Pi sayisi: " << (static_cast<float>(icerde) / deney_sayisi_1) * 4 << std::endl;

    /* UYGULAMA II */
    icerde = 0;
    const int yaricap_2 = 500;
    const int deney_sayisi_2 = 10000;
    for(int i = 0; i < deney_sayisi_2; i++) {

        int X = rand() % yaricap_2;
        int Y = rand() % yaricap_2;
        int Z = rand() % yaricap_2;
        if(true == inside(X, Y, Z, yaricap_2)) {

            icerde++;
        }
    }
    std::cout << "Kure icine dusen rastgele noktalar: " << icerde << std::endl;
    std::cout << "Pi sayisi: " << (static_cast<float>(icerde) / deney_sayisi_2) * 6 << std::endl;

    return 0;
}

bool inside(int X, int Y, int R) {

    int toplam = X*X + Y*Y;
    if(R*R < toplam){

        return false;
    } else {

        return true;
    }
}

bool inside(int X, int Y, int Z, int R){

    int toplam = X*X + Y*Y + Z*Z;
    if(R*R < toplam){

        return false;
    } else {

        return true;
    }
}

// bil142.tobbetu@gmail.com