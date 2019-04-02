#ifndef WINDOWSWRITESTRATEGY_H
#define WINDOWSWRITESTRATEGY_H
#include "writestrategy.h"
#include <iostream>
class WindowsWriteStrategy: public WriteStrategy{
    void execute(std::string data){
        std::cout << "Windows Write "<< data << std::endl;
    }
    ~WindowsWriteStrategy(){}
};
#endif // WINDOWSWRITESTRATEGY_H
