cmake_minimum_required(VERSION 3.10)
project(Voltra)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PROJECT_VERSION 1.0.0)

add_subdirectory(conf)

add_subdirectory(src)
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/conf)

add_subdirectory(lib/spdlog)

add_subdirectory(test)
add_subdirectory(lib/googletest)

# `make install` support
file(GLOB HEADERS "include/*.h")
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ${HEADERS})
INSTALL(TARGETS ${PROJECT_NAME} 
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include)