#pragma once

#include <SFML/Graphics.hpp>

#include "Constants.hpp"
#include "ball.hpp"

class GameEngine
{
private:
    // Video
    sf::RenderWindow window;

    // Objects
    Ball ball;
public:
    GameEngine();

    void draw();
    sf::RenderWindow& getWindow();

    void offScreenCollision();
};
