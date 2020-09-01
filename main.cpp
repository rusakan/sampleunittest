#include <QCoreApplication>
#include <gtest/gtest.h>

#define APPROVALS_GOOGLETEST
#include "ApprovalTests.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    ApprovalTests::initializeApprovalTestsForGoogleTests();
    return RUN_ALL_TESTS();
}
