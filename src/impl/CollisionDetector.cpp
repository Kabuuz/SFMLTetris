#include <tetris/impl/CollisionDetector.hpp>

#include <algorithm>

namespace tetris::impl
{

CollisionDetector::CollisionDetector(const GameBoardManager& gameBoardManager)
    : gameBoardManager_(gameBoardManager)
{}

bool CollisionDetector::isCollidingWithPresentBlocks(const Shape& shape) const
{
    const auto takenPositions = gameBoardManager_.getTakenPositions();
    const auto shapePositions = shape.getShapeBlocksPosition();
    std::set<Position> commonPositions{};

    std::set_intersection(takenPositions.begin(), takenPositions.end(),
                          shapePositions.begin(), shapePositions.end(),
                          commonPositions.begin());

    return !commonPositions.empty();
}

}  // namespace tetris::impl