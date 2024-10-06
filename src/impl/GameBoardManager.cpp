#include <tetris/impl/GameBoardManager.hpp>

#include <algorithm>

namespace tetris::impl
{

void GameBoardManager::addToBoard(const std::vector<Position>& positions)
{
    auto& boardArray = gameBoard_.getBoardArray();

    for (const auto& position : positions)
    {
        boardArray.at(position.y).at(position.x) = true;
    }

    removeFullRows(boardArray);
}

void GameBoardManager::removeFullRows(GameBoard::BoardArray& boardArray)
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

bool GameBoardManager::isRowFull(const GameBoard::BoardRow& row) const
{
    return std::all_of(row.begin(), row.end(),
                       [](const auto& isFilled) { return isFilled; });
}

std::vector<Position> GameBoardManager::getTakenPositions() const
{
    std::vector<Position> takenPositions{};
    const auto& boardArray = gameBoard_.getBoardArray();

    for (std::uint8_t rowId = 0; rowId < gameBoard_.getBoardHeight(); rowId++)
    {
        for (std::uint8_t columnId = 0; columnId < gameBoard_.getBoardWidth();
             columnId++)
        {
            if (boardArray.at(rowId).at(columnId))
            {
                takenPositions.emplace_back(rowId, columnId);
            }
        }
    }

    return takenPositions;
}

}  // namespace tetris::impl