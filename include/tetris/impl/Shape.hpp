#pragma once

#include <tetris/impl/Position.hpp>
#include <tetris/impl/fwd.hpp>

#include <set>

namespace tetris::impl
{

class Shape
{
public:
    Shape(const ShapeBlocks& fieldArray, Position position);

    void rotate();
    void move(Position deltaPosition);
    std::set<Position> getShapeBlocksPosition() const;

private:
    ShapeBlocks shapeBlocks_;
    Position absolutePosition;
};

}  // namespace tetris::impl