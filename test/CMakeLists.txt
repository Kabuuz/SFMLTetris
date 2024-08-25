find_package(GTest REQUIRED)

add_executable(basicProjectTest
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(basicProjectTest
    PUBLIC
    ${CMAKE_INCLUDE_PATH})

target_link_libraries(basicProjectTest gtest::gtest)
