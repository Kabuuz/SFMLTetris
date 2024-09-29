#pragma once

namespace tetris::impl
{

struct Position
{
    std::int8_t x;
    std::int8_t y;

    Position& operator+(const Position& other);
};

Position& Position::operator+(const Position& other)
{
    x += other.x;
    y += other.y;

    return *this;
}

}  // namespace tetris::impl