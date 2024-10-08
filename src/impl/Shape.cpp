#include <tetris/impl/Shape.hpp>

#include <cmath>

namespace tetris::impl
{

//TODO add UTs for this class
Shape::Shape(const ShapeBlocks& shapeBlocks, Position position)
    : shapeBlocks_(shapeBlocks), absolutePosition(position)
{}

void Shape::rotate()
{
    ShapeBlocks rotated{};
    constexpr int8_t Y_TO_X_SHIFT = 3;
    int8_t heightShift = Y_TO_X_SHIFT;

    //rotate
    for (auto& blockPosition : shapeBlocks_)
    {
        auto newYPosition = std::abs(blockPosition.x - Y_TO_X_SHIFT);
        blockPosition.x = blockPosition.y;
        blockPosition.y = newYPosition;

        if (newYPosition < heightShift)
        {
            heightShift = newYPosition;
        }
    }

    constexpr int8_t BLOCK_SHIFTED = 0;
    //shift to upper corner (already shifted to left)
    if (heightShift != BLOCK_SHIFTED)
    {
        for (auto& blockPosition : shapeBlocks_)
        {
            blockPosition.y -= heightShift;
        }
    }
    shapeBlocks_ = std::move(rotated);
}

void Shape::move(Position deltaPosition)
{
    absolutePosition = absolutePosition + deltaPosition;
}

std::set<Position> Shape::getShapeBlocksPosition() const
{
    std::set<Position> positions{};
    for (const auto& position : shapeBlocks_)
    {
        auto absoluteBlockPosition = position + absolutePosition;
        positions.insert(absoluteBlockPosition);
    }

    return positions;
}

}  // namespace tetris::impl