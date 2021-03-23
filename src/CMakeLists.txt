file(GLOB SOURCES
     "*.h"
     "*.cpp"
)

add_library(${LIBRARY_NAME} STATIC ${SOURCES})
target_link_libraries(${LIBRARY_NAME} spdlog)
target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_BINARY_DIR}/include)
target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)

if (${BUILD_EXECUTABLE})
   add_executable(${EXECUTABLE_NAME} ${SOURCES})
   target_link_libraries(${EXECUTABLE_NAME} ${BINARY})
   target_link_libraries(${EXECUTABLE_NAME} spdlog)
   target_include_directories(${EXECUTABLE_NAME} PUBLIC ${CMAKE_BINARY_DIR}/include)
   target_include_directories(${EXECUTABLE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
endif()