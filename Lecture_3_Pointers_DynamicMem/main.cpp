#include "main.hpp"

int main(){

    // array_processes();
    // string_processes();
    pointer_processes();
    return 0;
}

int topla(int array[], int boyut){

    int sum = 0;
    // int boyut = sizeof(array) / sizeof(array[0]); // ERROR!
    for(int i = 0; i < boyut; i++){

        sum += array[i];
    }

    array[0] = 158; // value of array elemans can change in function because of pass by pointer
    return sum;
}

void array_processes(void){

    for(int i = 0; i < 10; i++){

        i_array1[i] = i+1; // assigment of array
    }

    std::cout << "Size of i_array1: " << sizeof(i_array1) / sizeof(i_array1[0]) << std::endl;

    int row = sizeof(i_marray1) / sizeof(i_marray1[0]); // 2
    int col = sizeof(i_marray1[0]) / sizeof(i_marray1[0][0]); // 3
    std::cout << "Row size of i_marray1: " << row << std::endl;
    std::cout << "Col size of i_marray1: " << col << std::endl;

    int sum = 0;
    for(int element : i_array2)
    {
        sum += element;
    }
    std::cout << "Summation of i_array2 in for loop without indis and size: " << sum << std::endl;

    sum = 0;
    for(const int (&row)[3] : i_marray1){ 
        
        for(const int element : row){

            sum += element;
        }
    }
    // i_marray1 points an address. ( int (&row)[3] ) = ( auto& row ) -> same meanings
    std::cout << "Summation of i_marray1 in nested for loop without indis and size: " << sum << std::endl;

    std::cout << "Summation of i_array2 in function: " << topla(i_array2, sizeof(i_array2)/sizeof(i_array2[0])) << std::endl;
    std::cout << "Changed value of i_array2[0] in function: " << i_array2[0] << std::endl;

    std::fill(i_array1, i_array1+7, 5);     // [0,6) arası
    std::fill(i_array1+7, i_array1+10, 2);  // [7,9) arası
    std::cout << "i_array1: ";
    for(int element : i_array1){

        std::cout << element << ", "; // 5, 5, 5, 5, 5, 5, 5, 2, 2, 2
    }
    std::cout << std::endl;
}

void string_processes(void){

    std::string name;
    std::string full_name;
    std::cout << "Ad: ";
    std::cin >> name;
    std::cout << "Full Name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    /*
    * needs to include <limits> library
    * std::cin.ignore()                           - delete a number of character in cin buffer.
    * std::numeric_limits<>                       - represent size or position of stream ()
    * std::streamsize                             - maximum stream-size. for more information, go to std_streamsize.md file
    * std::numeric_limits<std::streamsize>::max() - returns maximum value of std::streamsize
    * std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') - delete all characters until new line (\n) character 
    * */
    std::getline(std::cin, full_name);

    // Functions for Strings 
    std::string dept = "ELE", code = "142", course;
    course = dept.append(code); // course = "ELE142"
    int length = course.length(); // 6 chars
    char letter = dept.at(1); // number of first character for dept is "L"
    std::cout << "course.substr(3,2): " << course.substr(3,2) << std::endl; // 14
    std::cout << "course.substr(3,3): " << course.substr(3,3) << std::endl; // 142
    course.insert(3, "_"); // Add a character that is '_' after the third element. -> ELE_142
    std::cout << "department: " << dept << std::endl << "code: " << code << std::endl << "course: " << course << std::endl;
    int pos = course.find("_"); // 3
    course.erase(pos, 1); // delete 1 chararcter from pos position
    std::cout << "course: " << course << std::endl; // "ELE142"
    course.erase(0, 3); 
    std::cout << "course" << course << std::endl; // "142"
    course.clear(); 
    std::cout << "course" << course << std::endl; // ""
    if(course.empty()){

        std::cout << "empty string" << std::endl;
    }
}

void pointer_processes(void){

    int i_val = 5; // allocates memory address
    std::cout << "Address of i_val: " << &i_val << std::endl;
    int *p_val = &i_val; // point to variable, need to give an address  
    std::cout << "Adress of p_val: " << p_val << std::endl;
}