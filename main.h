#ifndef __main__
#define __main__
#include <functional>
#include <iostream>
#include <memory>
#include <vector>

#ifdef WINDOWS
#include "winImplementaion.h"
auto printFunctionMakers = std::vector<std::function<std::shared_ptr<PrintHandler>()> >{
    []() { return std::shared_ptr<PrintHandler>(new WinPrintHandler()); },
    []() { return std::shared_ptr<PrintHandler>(new WinHeavyPrintHandler()); },
    []() { return std::shared_ptr<PrintHandler>(new WinLightPrintHandler()); }};
#else

#include "linuximplemenetaion.h"
auto printFunctionMakers = std::vector<std::function<std::shared_ptr<PrintHandler>()> >{
    []() { return std::shared_ptr<PrintHandler>(new LinuxPrintHandler()); },
    []() { return std::shared_ptr<PrintHandler>(new LinuxHeavyPrintHandler()); },
    []() { return std::shared_ptr<PrintHandler>(new LinuxLightPrintHandler()); }};
#endif

enum printerTypes {
    normalPrinter,
    heavyPrinter,
    lightPrinter
};

struct PrintFactory {
    static std::shared_ptr<PrintHandler> CreatePrinter(printerTypes a) {
        return printFunctionMakers[a]();
    }
};

#endif