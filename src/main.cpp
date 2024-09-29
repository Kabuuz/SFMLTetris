#include <tetris/Tetris.hpp>

#include <SFML/Graphics.hpp>//TODO remove

int main()
{
    auto game = tetris::Tetris();
    game.start();

    return 0;
}
