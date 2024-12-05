#include "GameEngine.hpp"

GameEngine::GameEngine()
{
    window.create(sf::VideoMode(Constants::Resolution::width, Constants::Resolution::height), "Ping Pong", sf::Style::Fullscreen);
    window.setFramerateLimit(120);
}

void GameEngine::draw()
{
    window.clear();
    window.draw(ball.getBall());
    window.display();
}

sf::RenderWindow& GameEngine::getWindow()
{
    return window;
}
