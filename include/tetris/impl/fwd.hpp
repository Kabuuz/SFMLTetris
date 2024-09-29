#pragma once

#include <tetris/impl/Constants.hpp>
#include <tetris/impl/Position.hpp>

#include <array>

namespace tetris::impl
{

using ShapeBlocks = std::array<Position, NUMBER_OF_BLOCKS_IN_SHAPE>;

}  // namespace tetris::impl