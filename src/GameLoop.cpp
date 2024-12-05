#include "GameLoop.hpp"
#include "Constants.hpp"

Game::Game()
{
}

// Main game loop
void Game::start()
{
    while (game.getWindow().isOpen())
    {
        sf::Event event;
        while (game.getWindow().pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                game.getWindow().close();
        }
        game.update();

        game.draw();
    }
}
