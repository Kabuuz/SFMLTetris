#include <tetris/impl/GameBoard.hpp>

namespace tetris::impl
{

GameBoard::GameBoard() : board_() {}

std::uint8_t GameBoard::getBoardHeight() const
{
    return BOARD_HEIGHT;
}

std::uint8_t GameBoard::getBoardWidth() const
{
    return BOARD_WIDTH;
}

GameBoard::BoardArray& GameBoard::getBoardArray()
{
    return board_;
}

}  // namespace tetris::impl