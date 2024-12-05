#include "ball.hpp"

// Constructor
Ball::Ball()
{
    // Set the starting position of the ball and its radius
    radius = 15;
    ball.setPosition(sf::Vector2f(400, 300));
    ball.setRadius(radius);

    // Setting the base ball values
    speed = 3.f; // Base value = 3
    velocity.x = speed;
    velocity.y = speed;
}

// Getter for display
sf::CircleShape& Ball::getBall()
{
    return ball;
}

// Update ball status
void Ball::update()
{
    ball.move(velocity.x, velocity.y);
}

// Check X-direction and reverse
void Ball::reverseVelocityX()
{
    if(velocity.x > 0)
    {
        velocity.x = -speed;
    }
    else
    {
        velocity.x = speed;
    }
}

// Check Y-direction and reverse
void Ball::reverseVelocityY()
{
    if (velocity.y > 0)
    {
        velocity.y = -speed;
    }
    else
    {
        velocity.y = speed;
    }
}

// Position getter
const sf::Vector2f& Ball::getPosition() const
{
    return ball.getPosition();
}

// Diameter getter
float Ball::getDiameter() const
{
    return ball.getRadius() * 2;
}

// Get calculated next position
sf::FloatRect Ball::getNextPosition() const
{
    sf::FloatRect nextPos = ball.getGlobalBounds();
    nextPos.left += velocity.x;
    nextPos.top += velocity.y;

    return nextPos;
}

// Set X-velocity by inertiaMultiplayer
void Ball::setVelocityX()
{
    velocity.x *= Constants::Physics::inertiaMultiplayer;
}
