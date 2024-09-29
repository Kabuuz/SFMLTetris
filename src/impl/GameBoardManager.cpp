#include <tetris/impl/GameBoardManager.hpp>

#include <algorithm>

namespace tetris::impl
{

void BoardGameManager::addToBoard(const std::vector<Position>& positions)
{
    auto& boardArray = gameBoard_.getBoardArray();

    for (const auto& position : positions)
    {
        boardArray.at(position.y).at(position.x) = true;
    }

    removeFullRows(boardArray);
}

void BoardGameManager::removeFullRows(GameBoard::BoardArray& boardArray)
{
    for (std::uint8_t rowId = gameBoard_.getBoardHeight() - 1; rowId > 0u;
         rowId--)
    {
        if (!isRowFull(boardArray.at(rowId)))
        {
            continue;
        }

        boardArray.at(rowId) = boardArray.at(rowId - 1);
    }
}

bool BoardGameManager::isRowFull(const GameBoard::BoardRow& row) const
{
    return std::all_of(row.begin(), row.end(),
                       [](const auto& isFilled) { return isFilled; });
}

}  // namespace tetris::impl