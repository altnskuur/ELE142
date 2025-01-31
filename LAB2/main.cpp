#include<iostream>

void compare(int *first, int *second);
void show(int dizi[], int boyut);

int main(){

    srand(time(NULL));
    const int c_elemannumber = 100;
    int *arr = new int(c_elemannumber);
    
    // fill random to the array dynamically
    for(int i = 0; i < c_elemannumber; i++){

        *(arr+i) = 1 + rand() % 100;
    }

    // print elements of random array with weights
    std::cout << "Random array: " << std::endl;
    show(arr, c_elemannumber);

    // buble sort algorithm with compare function
    std::cout << "Bubble sorting running..." << std::endl;
    for(int i = 0; i < (c_elemannumber-1); i++){

        for(int j = 0; j < (c_elemannumber-1-i); j++){

            compare((arr+j), (arr+j+1));
            
        }
    }

    // print elements of sorted array with weights
    std::cout << "Sorted Array: " << std::endl;
    show(arr, c_elemannumber);

    delete arr;
    return 0;
}

void compare(int *first, int *second){

    if(*first > *second){

        int temp = *first;
        *first = *second;
        *second = temp;
    }
}

void show(int dizi[], int boyut){

    for(int elem = 0; elem < boyut; elem++){

        for(int weight = 0; weight < *(dizi+elem); weight++){

            std::cout << "|";
        }
        std::cout << *(dizi+elem) << std::endl;
    }
    
}