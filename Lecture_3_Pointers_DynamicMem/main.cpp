#include "main.hpp"

int main(){

    // array_processes();
    // string_processes();
    // pointer_processes();
    dma_processes();
    return 0;
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

int topla(int array[], int boyut){

    int sum = 0;
    // int boyut = sizeof(array) / sizeof(array[0]); // ERROR!
    for(int i = 0; i < boyut; i++){

        sum += array[i];
    }

    array[0] = 158; // value of array elemans can change in function because of pass by pointer
    return sum;
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
    std::cout << "------------------" << std::endl;

    int *p_val1, i_val1 = 1, i_val2 = 2;
    p_val1 = &i_val1;
    std::cout << "Value of p_val1: " << *p_val1 << "\tAddress of p_val1: " << p_val1 << std::endl;
    std::cout << "Value of i_val1: " << i_val1 << "\tAddress of i_val1: " << &i_val1 << std::endl;
    std::cout << "Value of i_val2: " << i_val2 << "\tAddress of i_val2: " << &i_val2 << std::endl;
    std::cout << "------------------" << std::endl;
    
    p_val1 = &i_val2;
    std::cout << "Value of p_val1: " << *p_val1 << "\tAddress of p_val1: " << p_val1 << std::endl;
    std::cout << "Value of i_val1: " << i_val1 << "\tAddress of i_val1: " << &i_val1 << std::endl;
    std::cout << "Value of i_val2: " << i_val2 << "\tAddress of i_val2: " << &i_val2 << std::endl;
    std::cout << "------------------" << std::endl;

    i_val2 = 22; 
    std::cout << "Value of p_val1: " << *p_val1 << "\tAddress of p_val1: " << p_val1 << std::endl;
    std::cout << "Value of i_val2: " << i_val2 << "\tAddress of i_val2: " << &i_val2 << std::endl;
    std::cout << "------------------" << std::endl;

    std::cout << "Value of i_val2: " << i_val2 << "\tAddress of i_val2: " << &i_val2 << std::endl;
    value_inc(i_val2); // copy i_val2 value to the val variable that is in to the value_inc function.
    std::cout << "Value of i_val2: " << i_val2 << "\tAddress of i_val2: " << &i_val2 << std::endl;
    std::cout << "------------------" << std::endl; 

    std::cout << "Value of p_val1: " << *p_val1 << "\tAddress of p_val1: " << p_val1 << std::endl;
    pointer_inc(p_val1); // copy p_val1 address to the addr pointer variable that is in to the pointer_inc fuction.
    std::cout << "Value of p_val1: " << *p_val1 << "\tAddress of p_val1: " << p_val1 << std::endl;
    std::cout << "------------------" << std::endl; 

    // Arrays with pointers
    int arr[] = {0, 11, 22, 33, 44, 55};
    /*
    * accessing values:
    * arr[0] -> 0
    * arr[1] -> 11
    * ...
    * but what is the meaning of only "arr"?
    * "arr" is the starting address of array
    * int *p = arr; -> meaningfull
    * and also values accessable with this way;
    * *(arr) -> 0
    * *(arr+1) -> 11
    * *(arr+2) -> 22
    * ...
    * */
    std::cout << "Elemans of arr[]: ";
    for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++){

        std::cout << *(arr + i) << ", ";
    }
    std::cout << "------------------" << std::endl; 
}

// pass by value
void value_inc(int val){

    std::cout << "Value of val: " << val << "\tAddress of val: " << &val << std::endl;
    // increment val value in the function
    ++val;
} // delete all variables

// pass by referance
void pointer_inc(int *addr){

    std::cout << "Value of addr: " << *addr << "\tAddress of addr: " << addr << std::endl;
    // increment *addr value in the function
    ++(*addr);
    // address of addr is the same address with p_val1 in the main function. Because of this, all possible changes with addr can change p_val1 pointer variable in the main function. 
} // delete all variables
// even if all of variables deletes, processes in this function are in the address side. because of this, variables can delete but changes can not delete.

/* DYNAMIC MEMORY ALLOCATION */
void dma_processes(void){

    /*
    * The stack is a memory area where temporary data (such as local variables, parameters, and return addresses) 
    * is stored and automatically managed during program execution. When a function is called, 
    * the relevant data is pushed onto the stack; when the function finishes, this data is automatically removed.
    * 
    * The heap is a memory region used for dynamic memory allocation during program execution. 
    * In this area, data allocated using operations like new or malloc is stored. 
    * Memory in the heap is not managed automatically; therefore, the allocated memory must be manually 
    * freed using delete or free.
    * */
    int *dma_var = new int; // definition of dma
    delete dma_var; // this is not meaning of deleting dma_var. this means making free value in the address of dma_var.
    std::cout << "Value of dma_var: " << *dma_var << "\tAddress of dma_var: " << dma_var << std::endl;

    int *dma_var2 = new int;
    *dma_var2 = 256;
    std::cout << "Value of dma_var2: " << *dma_var2 << "\tAddress of dma_var2: " << dma_var2 << std::endl;
    std::cout << "------------------" << std::endl; 
    *dma_var = 330;
    std::cout << "Value of dma_var: " << *dma_var << "\tAddress of dma_var: " << dma_var << std::endl;
    std::cout << "Value of dma_var2: " << *dma_var2 << "\tAddress of dma_var2: " << dma_var2 << std::endl;
    // both of them shows same address. because of this, only one change will changes other one
    std::cout << "------------------" << std::endl; 

    // if not cut the connection between dma_var and address of dma_var, it will be dangerous -> data lose
    dma_var = nullptr; // cut the connection between dma_var and the address of dma_var
    // *dma_var = 340; -> ERROR
    if(nullptr != dma_var){
        delete dma_var;
    } // controlling mechanism
    // before to nullptr assignment, control delete operation
    dma_var = new int;
    *dma_var = 110; 
    std::cout << "Value of dma_var: " << *dma_var << "\tAddress of dma_var: " << dma_var << std::endl;
    std::cout << "Value of dma_var2: " << *dma_var2 << "\tAddress of dma_var2: " << dma_var2 << std::endl;
    std::cout << "------------------" << std::endl; 

    /*
    dma_var = dma_var2; -> FORBIDDEN (memory leak)
    dma_var address is full with the values. if you do not clear that region, trash values will not reachable and it will be stay in that region.
    before the process, you need to clear that region.
    */
    delete dma_var;
    dma_var = dma_var2;
    std::cout << "Value of dma_var: " << *dma_var << "\tAddress of dma_var: " << dma_var << std::endl;
    std::cout << "Value of dma_var2: " << *dma_var2 << "\tAddress of dma_var2: " << dma_var2 << std::endl;
    std::cout << "------------------" << std::endl; 

    delete dma_var;
    delete dma_var2;

    // Arrays with dynamic memory allocation
    int *dma_arr = new int[10]; // new int(10) -> SAME
    dma_arr[0] = 5;
    delete[] dma_arr;
    dma_arr = nullptr;
}