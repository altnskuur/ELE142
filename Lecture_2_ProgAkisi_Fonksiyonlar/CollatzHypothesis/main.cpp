#include <iostream>

int main(){

    int value = 0;
    std::cout << "Sayi girin:";
    std::cin >> value;

    while(1){

        if(1 == value){

            break;
        } else {

            if(0 == value % 2){

                value = value / 2;
            } else {

                value = 3 * value + 1;
            }

            std::cout << "value: " << value << std::endl;
        }
    }

    return 0;
}