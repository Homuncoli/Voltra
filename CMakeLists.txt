cmake_minimum_required(VERSION 3.10)
project(Voltra 
        VERSION 1.0.0
        DESCRIPTION "An template with various DevOps"
        LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug") # Default to 'Debug'
endif()

if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
  option(BUILD_TESTS "Add gtest to build" ON)
endif ()
if (${CMAKE_BUILD_TYPE} STREQUAL "Release")
  option(BUILD_TESTS "Add gtest to build" OFF)
endif ()

add_subdirectory(conf)

add_subdirectory(src)
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/conf)

add_subdirectory(lib/spdlog)

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
