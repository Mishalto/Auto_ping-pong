#include "ball.hpp"

Ball::Ball()
{
    ball.setPosition(sf::Vector2f(500, 500));
    ball.setRadius(50);
}

sf::CircleShape& Ball::getBall()
{
    return ball;
}
