#pragma once
#include "gmock/gmock.h"

#include "SomeInterface.h"

using namespace ::testing;

class SomeInterfaceMock : public ISomeInterface
{
public:
    MOCK_METHOD1(getParam,double(int));
};
