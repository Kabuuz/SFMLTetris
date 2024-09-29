#pragma once

#include <tetris/impl/fwd.hpp>
#include <tetris/impl/Position.hpp>

#include <vector>

namespace tetris::impl
{

class Shape
{
public:
    Shape(const ShapeBlocks& fieldArray, Position position);

    void rotate();
    void move(Position deltaPosition);
    std::vector<Position> getShapeBlocksPosition() const;

private:
    ShapeBlocks shapeBlocks_;
    Position absolutePosition;
};

}  // namespace tetris::impl