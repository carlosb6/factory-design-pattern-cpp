#include "superPrintclass.h"
#ifndef WINDOWS
trying to build windows code on something incompatible
#endif

    struct WinPrintHandler : PrintHandler {
    void print() {
        std::cout
            << "this simulates Win code" << std::endl;
    }
};
struct WinHeavyPrintHandler : PrintHandler {
    void print() {
        std::cout
            << "this simulates heavy Win code" << std::endl;
    }
};
struct WinLightPrintHandler : PrintHandler {
    void print() {
        std::cout
            << "this simulates light Win code" << std::endl;
    }
};