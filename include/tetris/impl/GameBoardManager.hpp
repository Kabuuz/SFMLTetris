#pragma once

#include <tetris/impl/GameBoard.hpp>

#include <tetris/impl/Position.hpp>

#include <set>

namespace tetris::impl
{

class GameBoardManager
{
public:
    GameBoardManager() = default;

    void addToBoard(const std::set<Position>& positions);
    std::set<Position> getTakenPositions() const;

private:
    void removeFullRows(GameBoard::BoardArray& boardArray);
    bool isRowFull(const GameBoard::BoardRow& row) const;

    GameBoard gameBoard_;
};

}  // namespace tetris::impl