#include <tetris/impl/GameBoard.hpp>

namespace tetris::impl
{

GameBoard::GameBoard() : board_() {}

std::int8_t GameBoard::getBoardHeight() const
{
    return BOARD_HEIGHT;
}

std::int8_t GameBoard::getBoardWidth() const
{
    return BOARD_WIDTH;
}

GameBoard::BoardArray& GameBoard::getBoardArray()
{
    return board_;
}

const GameBoard::BoardArray& GameBoard::getBoardArray() const
{
    return board_;
}

}  // namespace tetris::impl