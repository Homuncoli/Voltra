set(BINARY ${PROJECT_NAME}_test)

file(GLOB SOURCES
     "*.h"
     "*.cpp"
)
add_executable(${BINARY} ${SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${PROJECT_NAME} gtest)