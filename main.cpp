#define WINDOWS
#include "main.h"

// this program is to test the factory method where we have code that only works on
// windows and the other works on something else (remove #define WINDOWS to test)
//
// what is special about this code is that instead of using a switch statement in the factory
// to create the objects which would require an #ifdef **** in the body of the function
// I use an array of functions that create the objects, meaning that we only need to
// use one ifdef at the top of the file to include the implementation (win/linux)
// and in that same ifdef we can fill the array

// this way is cleaner and more direct that the other ways which would be
// 1- to use a ifdef inside of the factory that would cover each set of switch statment
// 2- to use an ifdef inside the switch body for every type
// 3- there could be the possibility to create another file for that factory

int main() {
    PrintFactory::CreatePrinter(printerTypes::heavyPrinter)->print();
    PrintFactory::CreatePrinter(printerTypes::normalPrinter)->print();
    PrintFactory::CreatePrinter(printerTypes::lightPrinter)->print();

    auto p = PrintFactory::CreatePrinter(printerTypes::normalPrinter);
}