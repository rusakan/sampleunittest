#pragma once

class ISomeInterface
{
public:
    virtual double getParam(int idx) = 0;

    virtual ~ISomeInterface(){}
};
