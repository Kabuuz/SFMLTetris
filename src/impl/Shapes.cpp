#include <tetris/impl/Shapes.hpp>

namespace tetris::impl
{

ShapeBlocks LShape = {{{0, 0}, {0, 1}, {0, 2}, {1, 2}}};
ShapeBlocks TShape = {{{0, 0}, {0, 1}, {0, 2}, {1, 1}}};
ShapeBlocks IShape = {{{0, 0}, {1, 0}, {2, 0}, {3, 0}}};
ShapeBlocks ZShape = {{{0, 0}, {1, 0}, {1, 1}, {1, 2}}};
ShapeBlocks BoxShape = {{{0, 0}, {0, 1}, {1, 0}, {1, 1}}};

}  // namespace tetris::impl