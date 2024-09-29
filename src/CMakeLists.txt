find_package(SFML REQUIRED)

set(EXEC_NAME Tetris)

add_subdirectory(impl)

add_executable(${EXEC_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/Tetris.cpp)

target_include_directories(${EXEC_NAME}
    PUBLIC
    ${PROJECT_INCLUDE_DIR})

target_link_libraries(${EXEC_NAME}
    sfml-graphics
    tetris_impl)

