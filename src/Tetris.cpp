#include <tetris/Tetris.hpp>

#include <iostream>

namespace tetris
{

Tetris::Tetris() : running_(true) {}

void Tetris::start()
{
    std::cout << "Welcome to SFML Tetris" << std::endl;
    runMainLoop();
}

void Tetris::runMainLoop()
{
    do
    {
        readInput();
        if (running_)
        {
            update();
            display();
        }

    } while (running_);
}

void Tetris::readInput()
{
    //TODO
    //TODO if ESC cicked change running_ to false
}

void Tetris::update()
{
    //TODO
}

void Tetris::display()
{
    //TODO
}

}  // namespace tetris