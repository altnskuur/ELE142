#include <iostream>

/* DECLERATION */
char    ch_var;             // 1 Byte - [0, 255]. works with ASCII
int     int_var1, int_var2; // 4 Byte - [-2^31, 2^31-1]
unsigned int ui_var;        // 4 Byte - [0, 2^32-1]. works with only positive integers
short   sh_var;             // 2 Byte - [-2^15, 2^15-1]
unsigned short us_var;      // 2 Byte - [0, 2^16-1]
long long ll_var;           // 8 Byte - [-2^63, 2^63-1]
unsigned long long ull_var; // 8 Byte - [0, 2^64-1]
float   fl_var;             // 4 Byte - 6 decimal places of precision
double  db_var;             // 8 Byte - 14 decimal places of precision
bool    b_var;              // 1 Byte - true or false

/* INITIALIZATION */
char    ch_var1 = 'A', ch_var2('B');
int     int_var3 = 3, int_var4(4);
float   fl_var1 = 3.14, fl_var2(354.2);
double  db_var1 = 2.223421, db_var2(33.323544);

/* typedef */
// renaming of variable type
typedef unsigned short YEAR;
YEAR this_year = 2025;

/* const variables */
// non-changable variables
const int consti_var = 25;

/* define */
// Giving a name of a value. precompiler will paste value instead of defined name
#define DEC_1 1
// define type constant value does not take a place in the memory. This is an alias between program and compiler

/* ENUM */
// A group of word needs to represent some constant integers
enum color {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE, GOLD = 5, SILVER = 10};
color res1_digit1st   = BROWN;  // 1 
color res1_digit2nd   = BLACK;  // 0  
color res1_multiplier = RED;    // 2 > 10 x 10^2 kOhm resistor
color res1_tolerance  = GOLD;   // 5 > +- 5% error!
/*
    0   BLACK
    1   BROWN
    2   RED
    3   ORANGE
    4   YELLOW
    5   GREEN   GOLD
    6   BLUE
    7   VIOLET
    8   GREY
    9   WHITE
    10          SILVER
*/

/* NAMESPACE */
// picking up to the variables that has a same points
namespace resistor1 {
    color digit1st, digit2nd, multiplier, tolerance;
}
// different namespaces has same variable names inside of namespace area
namespace resistor2 {
    color digit1st, digit2nd, multiplier, tolerance;
}

/* USING */
// if a name using frequently, it can be warn the compiler using 'using'
using namespace resistor2;
// no need to access like resistor2::digit1st etc. just digit1st is enough for accessing

/* IMPLICIT - EXPLICIT */
int int_var5 = 3.14;     // r-value is a float. compiler will be translate variable type of r-value (int) -> implicit 
int int_var6 = (int)3.14; // r-value is a float but emphasized with (int) keyword. so user makes a decision for translation (int) -> explicit

/*   */
float fl_var3 = 10 / 3;   // fl_var2 = 3
float fl_var4 = 10 / 3.0; // fl_var3 = 3.333333
float fl_var5 = 10.0 / 3; // fl_var4 = 3.333333

float fl_var6 = (10 / 3) * 3;    // 9.0
int   int_var7 = (10 / 3.0) * 3; // 10

/* PREFIX - POSTFIX */
int int_var8 = ++int_var7; // int_var7 += 1; -> int_var8 = int_var7 -> PREFIX
int int_var9 = int_var7++; // int_var9 = int_var7 -> int_var7 += 1  -> POSTFIX

/*   */
short sh_var1 = 5; // 00000101
short sh_var2 = sh_var1 << 3; // 00101000 ( 5 * 8 = 40) -> 8: shifting 3 digit ( 2^3 )
