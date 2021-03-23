set(BINARY ${PROJECT_NAME}_test)

set(TEST_SOURCES main_test.cpp Formula_test.cpp Environment_test.cpp)

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${PROJECT_NAME} gtest)