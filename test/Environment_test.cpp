#include <gtest/gtest.h>
#include "Environment.h"

TEST(Environment, cmake_project_name) {
    #ifdef CMAKE_PROJECT_NAME
        SUCCEED();
    #else
        FAIL();
    #endif
}

TEST(Environment, cmake_project_version) {
    #ifdef CMAKE_PROJECT_VERSION
        SUCCEED();
    #else
        FAIL();
    #endif
}