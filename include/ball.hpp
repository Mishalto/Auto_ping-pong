#pragma once

#include <SFML/Graphics.hpp>

class Ball
{
private:
sf::CircleShape ball;
sf::Vector2f velocity;
[[maybe_unused]]float speed;

public:
    Ball();

    sf::CircleShape& getBall();
    
};
