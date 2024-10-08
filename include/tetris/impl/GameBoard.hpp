#pragma once

#include <array>
#include <cstdint>

namespace tetris::impl
{

class GameBoard
{
    static constexpr std::int8_t BOARD_HEIGHT = 20u;
    static constexpr std::int8_t BOARD_WIDTH = 10u;

public:
    using BoardRow = std::array<bool, BOARD_WIDTH>;
    using BoardArray = std::array<BoardRow, BOARD_HEIGHT>;

    GameBoard();

    std::int8_t getBoardWidth() const;
    std::int8_t getBoardHeight() const;

    BoardArray& getBoardArray();
    const BoardArray& getBoardArray() const;

private:
    BoardArray board_;
};

}  // namespace tetris::impl