#ifndef WRITESTRATEGY_H
#define WRITESTRATEGY_H

#include <string>
class WriteStrategy
{
public:
    virtual void execute(std::string data) = 0;
    virtual ~WriteStrategy(){}
};

#endif // WRITESTRATEGY_H
