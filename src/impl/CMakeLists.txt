add_library(tetris_impl STATIC)

target_sources(tetris_impl
    PUBLIC
    ${PROJECT_INCLUDE_DIR}/tetris/impl/Constants.hpp
    ${PROJECT_INCLUDE_DIR}/tetris/impl/fwd.hpp
    ${PROJECT_INCLUDE_DIR}/tetris/impl/GameBoard.hpp
    ${PROJECT_INCLUDE_DIR}/tetris/impl/GameBoardManager.hpp
    ${PROJECT_INCLUDE_DIR}/tetris/impl/Position.hpp
    ${PROJECT_INCLUDE_DIR}/tetris/impl/Shape.hpp
    ${PROJECT_INCLUDE_DIR}/tetris/impl/Shapes.hpp

    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/GameBoard.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/GameBoardManager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Shape.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Shapes.cpp
)

target_include_directories(tetris_impl
    PUBLIC
    ${PROJECT_INCLUDE_DIR}
)
