cmake_minimum_required(VERSION 3.10)
project(Voltra)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PROJECT_VERSION 1.0.0)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/conf)
add_subdirectory(conf)

include_directories(include)
add_subdirectory(src)

add_subdirectory(lib/spdlog)

add_subdirectory(test)
add_subdirectory(lib/googletest)