#include <iostream>
#include <string>
#include <limits>

int i_array1[10];                // i_array1[0]={not assignment} .. 
int i_array2[] = {1, 2, 3, 4};   // equals to i_array2[3] = {1, 2, 3, 4};
int i_array3[10] = {1, 2, 3, 4}; // i_array3[0]=1, i_array3[1]=2, i_array3[2]=3, i_array3[3]=4, i_array3[4]={not assignment} .. 

int i_marray1[2][3] = {11, 12, 13, 21, 22, 23};
int i_marray2[2][3] = {{11, 12, 13}, {21, 22, 23}};
int i_marray3[][3] = {11, 12, 13, 21, 22, 23};

char str1[] = {'E', 'L', 'E', '1', '4', '2', '\0'}; // char array - string
std::string str2 = "ELE142"; // automatically added '\0' 

void array_processes(void);
void string_processes(void);
void pointer_processes(void);
int topla(int array[], int boyut);