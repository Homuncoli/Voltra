set(BINARY ${PROJECT_NAME})

file(GLOB SOURCES
     "*.h"
     "*.cpp"
)

add_library(${BINARY} STATIC ${SOURCES})
target_link_libraries(${BINARY} spdlog)

add_executable(${BINARY}_run ${SOURCES})
target_link_libraries(${BINARY}_run ${BINARY})
target_link_libraries(${BINARY}_run spdlog)