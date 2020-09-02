#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "ApprovalTests/ApprovalTests.hpp"
#include "SomeInterfaceMock.h"

using namespace ::testing;
using namespace ApprovalTests;

namespace  {
double complexOperation(double param1, double param2)
{
    if(param1>param2)
        return param1-param2;
    else if(param1==param2)
        return param1+param2;
    else
        return param1*param2;
}
}

TEST(SampleUnitTest, sample)
{
    double a = 3.9;
    double b = 2.2;
    Approvals::verify(complexOperation(a,b));
}

TEST(SampleUnitTest, verifyAllCombinations)
{
    std::vector<double> param1 = {2.0,1.1};
    std::vector<double> param2 = {2.0,6.7,9.8,123.4};
    CombinationApprovals::verifyAllCombinations([](double a, double b){return complexOperation(a,b);},param1,param2);
}

TEST(SampleUnitTest, testWithMock)
{
    NiceMock<SomeInterfaceMock> paramGen;
    ON_CALL(paramGen,getParam(1)).WillByDefault(Return(6.7));
    ON_CALL(paramGen,getParam(2)).WillByDefault(Return(3.1));
    Approvals::verify(complexOperation(paramGen.getParam(1),paramGen.getParam(2)));
}
