QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += ../../../googletest/googletest/include
INCLUDEPATH += ../../../googletest/googlemock/include
INCLUDEPATH += ../../../ApprovalTests.cpp
INCLUDEPATH += ../../../ApprovalTests.cpp/ApprovalTests

unix {
    LIBS += ../../../googletest/install/lib/libgtest.a
    LIBS += ../../../googletest/install/lib/libgmock.a
    LIBS += ../../../ApprovalTests.cpp/ApprovalTests/out/libApprovalTests.a
}
win32 {
    LIBS += ../../../googletest/install/lib/gtest.lib
    LIBS += ../../../googletest/install/lib/gmock.lib
    LIBS += ../../../ApprovalTests.cpp/ApprovalTests/out/ApprovalTests.lib
}

SOURCES += \
        main.cpp \
        tests.cpp

DEFINES += APPROVALS_GOOGLETEST_EXISTING_MAIN APPROVAL_TESTS_DISABLE_FILE_MACRO_CHECK

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    SomeInterface.h \
    SomeInterfaceMock.h
