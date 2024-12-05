#pragma once

#include <SFML/Graphics.hpp>

#include "GameEngine.hpp"

class Game
{
private:
    GameEngine game;
public:
    Game();

    void start();
};
