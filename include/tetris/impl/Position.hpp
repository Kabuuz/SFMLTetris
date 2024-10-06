#pragma once

#include <tuple>

#include <cstdint>

namespace tetris::impl
{

struct Position
{
    std::int8_t x;
    std::int8_t y;

    Position operator+(const Position& other) const;
    Position operator=(const Position& other) const;
    friend bool operator<(const Position& lhs, const Position& rhs);
};

Position Position::operator+(const Position& other) const
{
    std::int8_t newX = x + other.x;
    std::int8_t newY = y + other.y;
    return Position{newX, newY};
}

Position Position::operator=(const Position& other) const
{
    return {x, y};
}

bool operator<(const Position& lhs, const Position& rhs)
{
    return std::tie(lhs.x, lhs.y) < std::tie(rhs.x, rhs.y);
}

}  // namespace tetris::impl