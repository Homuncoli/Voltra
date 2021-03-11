set(BINARY ${CMAKE_PROJECT_NAME})

set(SOURCES main.cpp Forumla.cpp)

add_executable(${BINARY} ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})

target_link_libraries(${BINARY} spdlog)
target_link_libraries(${BINARY}_lib spdlog)