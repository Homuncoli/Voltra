file(GLOB SOURCES
     "*.h"
     "*.cpp"
)
add_executable(${TEST_NAME} ${SOURCES})

add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})

target_link_libraries(${TEST_NAME} PUBLIC ${LIBRARY_NAME} gtest)