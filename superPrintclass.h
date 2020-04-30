#include <iostream>
struct PrintHandler {
    PrintHandler() {
        std::cout << "ctor" << std::endl;
    }
    virtual void print() = 0;
    ~PrintHandler() {
        std::cout << "dtor" << std::endl;
    }
};
