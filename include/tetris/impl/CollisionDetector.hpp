#pragma once

#include <tetris/impl/GameBoardManager.hpp>
#include <tetris/impl/Shape.hpp>

namespace tetris::impl
{

class CollisionDetector
{
public:
    CollisionDetector(const GameBoardManager& gameBoardManager);

    bool isCollidingWithPresentBlocks(const Shape& shape) const;

private:
    const GameBoardManager& gameBoardManager_;
};

}  // namespace tetris::impl