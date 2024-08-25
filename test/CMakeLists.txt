find_package(GTest REQUIRED)

set(EXEC_NAME TetrisTests)

add_executable(${EXEC_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(${EXEC_NAME}
    PUBLIC
    ${CMAKE_INCLUDE_PATH})

target_link_libraries(${EXEC_NAME} 
    gtest::gtest)
