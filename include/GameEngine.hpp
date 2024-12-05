#pragma once

#include <SFML/Graphics.hpp>

#include "Constants.hpp"
#include "ball.hpp"
#include "player.hpp"

class GameEngine
{
private:
    // Video
    sf::RenderWindow window;

    // Objects
    Ball ball;
    Player player;
public:
    // Declarated constuctor
    GameEngine();

    // Video methods
    void draw();
    sf::RenderWindow& getWindow();

    // Collision methods
    void offScreenCollision();
    void objectsCollision();
    
    // Physics methods
    void update();
};
