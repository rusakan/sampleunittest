# sampleunittest
Sample unit test using: gtest, approvals and QtCreator

This project demonstrates how to use a combination of Google test and Approvals library within QtCreator. It is applicable for Windows and MacOS.
In order to get it running download and compile the following projects first
* https://github.com/google/googletest
* https://github.com/approvals/ApprovalTests.cpp

You can modify the SampleUnitTest.pro in order to ajust INCLUDEPASTH and LIBS to point your local file locations.

In order to test the code coverage on mac you need to put the following line as arguments for the executable in QtCreator:

\> output.log && (%{sourceDir}/runCoverage.sh ./)

lcov needs to be installed before. Run "brew install lcov" to do that.

If you want to do the code coverage on Windows, OpenCppCoverage is recommended.
