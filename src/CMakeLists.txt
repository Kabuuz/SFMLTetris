find_package(SFML REQUIRED)

set(EXEC_NAME Tetris)

add_executable(${EXEC_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(${EXEC_NAME}
    PUBLIC
    ${PROJECT_INCLUDE_DIR})

target_link_libraries(${EXEC_NAME}
    sfml-graphics)

