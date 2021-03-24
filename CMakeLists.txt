cmake_minimum_required(VERSION 3.10)

project(Voltra
        VERSION 1.0.0
        DESCRIPTION "An template with various DevOps"
        LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug") # Default to 'Debug'
endif()

set(LIBRARY_NAME ${PROJECT_NAME})
set(EXECUTABLE_NAME ${PROJECT_NAME}_run)
set(TEST_NAME ${PROJECT_NAME}_test)
option(BUILD_EXECUTABLE "Build an executable in addition to the static lib" ON)
option(ADD_LOG "Add spdlog as a logging library" ON)

if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
  option(BUILD_TESTS "Add gtest to build" ON)
endif ()
if (${CMAKE_BUILD_TYPE} STREQUAL "Release")
  option(BUILD_TESTS "Add gtest to build" OFF)
endif ()

add_subdirectory(include)

add_subdirectory(src)

if (${ADD_LOG})
   add_subdirectory(lib/spdlog)
endif()

if (${BUILD_TESTS})
   add_subdirectory(test)
   add_subdirectory(lib/googletest)
endif()

# `make install` support
file(GLOB HEADERS "include/*.h")
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ${HEADERS})
INSTALL(TARGETS ${PROJECT_NAME} 
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include)
