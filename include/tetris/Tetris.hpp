#pragma once

namespace tetris
{

class Tetris
{
public:
    Tetris();

    void start();

private:
    void runMainLoop();
    void readInput();
    void update();
    void display();

    //TODO add services for input,update,display
    bool running_;
};

}  // namespace tetris