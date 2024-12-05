#include "GameEngine.hpp"

#include <iostream> // Debug

// Create and initialize the window with basic parameters
GameEngine::GameEngine()
{
    window.create(sf::VideoMode(Constants::Resolution::width, Constants::Resolution::height), "Ping Pong", sf::Style::None);
    window.setFramerateLimit(120);
}

// Draw all objects
void GameEngine::draw()
{
    window.clear();
    window.draw(ball.getBall());
    window.draw(player.getShape());
    window.display();
}

// Getter for window
sf::RenderWindow& GameEngine::getWindow()
{
    return window;
}

// Update objects status
void GameEngine::update()
{
    ball.update();
    player.update();
    offScreenCollision();
    objectsCollision();
}

// Check and reverse if the ball goes out of screen
void GameEngine::offScreenCollision()
{
    // X-check
    if(ball.getPosition().x > Constants::Resolution::width - ball.getDiameter())
    {
        ball.reverseVelocityX();
    }
    else if(ball.getPosition().x < 0)
    {
        ball.reverseVelocityX();
    }

    // Y-check
    if(ball.getPosition().y > Constants::Resolution::height - ball.getDiameter())
    {
        // ball.reverseVelocityY();
    }
    else if(ball.getPosition().y < 0)
    {
        ball.reverseVelocityY();
    }
}

// Interaction and collision with a player and ball
void GameEngine::objectsCollision()
{
    sf::FloatRect playerBounds = player.getGlobalBounds();
    sf::FloatRect ballNextPos = ball.getNextPosition();
    if(playerBounds.intersects(ballNextPos))
    {
        ball.reverseVelocityY();
        if(player.getCurrentSpeed() == 0)
        {
            ball.setVelocityX();
        }
    }
}
