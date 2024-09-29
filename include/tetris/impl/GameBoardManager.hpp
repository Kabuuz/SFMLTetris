#pragma once

#include <tetris/impl/GameBoard.hpp>

#include <tetris/impl/Position.hpp>

#include <vector>

namespace tetris::impl
{

class BoardGameManager  //TODO rename to GameBoardManager
{
public:
    BoardGameManager() = default;

    void addToBoard(const std::vector<Position>& positions);

private:
    void removeFullRows(GameBoard::BoardArray& boardArray);
    bool isRowFull(const GameBoard::BoardRow& row) const;

    GameBoard gameBoard_;
};

}  // namespace tetris::impl