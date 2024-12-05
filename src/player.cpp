#include "player.hpp"

// Constructor
Player::Player()
{
    // Set player variables
    globalSpeed = 7.f;
    currentSpeed = 0.f;
    xSize = 90;
    ySize = 25;

    // Set player size objects and set start positon
    player.setSize(sf::Vector2f(xSize, ySize));
    player.setPosition(sf::Vector2f(Constants::Resolution::width / 2 - xSize, Constants::Resolution::height - ySize));
}

// Getter for display
sf::RectangleShape& Player::getShape()
{
    return player;
}

// Update player status
void Player::update()
{
    checkInput();
}

// Check keyboard input and move
void Player::checkInput()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        if(player.getPosition().x < Constants::Resolution::width - xSize)
        {
            player.move(globalSpeed, 0.f);
            currentSpeed = globalSpeed;
        }
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        if(player.getPosition().x > 0)
        {
            player.move(-globalSpeed, 0.f);
            currentSpeed = -globalSpeed;
        }
    }
    else
    {
        currentSpeed = 0.f;
    }
}

// Get global bounds
sf::FloatRect Player::getGlobalBounds() const
{
    return player.getGlobalBounds();
}

// Get current speed
float Player::getCurrentSpeed() const
{
    return currentSpeed;
}
