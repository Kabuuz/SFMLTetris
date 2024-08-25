add_executable(basicProject
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(basicProject
    PUBLIC
    ${PROJECT_INCLUDE_DIR})
