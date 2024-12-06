#pragma once

#include <SFML/Graphics.hpp>

#include "Constants.hpp"

class Ball
{
private:
    sf::CircleShape ball;

    float radius;

    sf::Vector2f velocity;
    float speed;

public:
    // Declarated constructor
    Ball();

    // Video
    sf::CircleShape& getBall();
    
    // Update ball status
    void update();

    // Setters
    void reverseVelocityX();
    void reverseVelocityY();
    void setVelocityX(bool playerIsMoving);

    // Getters
    float getSpeed() const;
    const sf::Vector2f& getPosition() const;
    float getDiameter() const;
    sf::FloatRect getNextPosition() const;
};
