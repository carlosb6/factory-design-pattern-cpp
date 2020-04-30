#include "superPrintclass.h"

#ifdef WINDOWS
trying to build linux code on windows
#endif

    struct LinuxPrintHandler : PrintHandler {
    void print() {
        std::cout
            << "this simulates linux code" << std::endl;
    }
};
struct LinuxHeavyPrintHandler : PrintHandler {
    void print() {
        std::cout
            << "this simulates heavy linux code" << std::endl;
    }
};
struct LinuxLightPrintHandler : PrintHandler {
    void print() {
        std::cout
            << "this simulates light linux code" << std::endl;
    }
};