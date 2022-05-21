/*
    Variables are memory spaces where you can put values. There are many types
    of it, like:

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false
                             - from: https://www.w3schools.com/cpp/cpp_variables.asp
*/
#include <iostream>
using namespace std;

int myNum = 15;
double myDoubleNum = 15.25;
char myChar = 'a';
string myString = "Hello World";

bool myTrueBool = true;
bool myFalseBool = false;

/*
    Wait, why? The computer reads 0 (in bool variables) like false, and 1 like true.
    Memorize this, it's important.
*/
bool myNumericFalseBool = 0;
bool myNumericTrueBool = 1;

// Multiple declaration
int x = 10, y = 15, z = 20;

int main()
{
    std::cout << myNum << '\n';
    // You can add more '<<' to print more data in one line
    // Adding '\n' you can jump a line
    std::cout << myNum << myString << "\n";
    std::cout << "String "
              << "concatenation \n";

    /*
      To print a number with a string, you need to put %d (wherever number type) and put the number
      before the string, following this:
    */
    std::printf("Hi, this value is being pushed to %s%s position %d", "%","d", x);
}
