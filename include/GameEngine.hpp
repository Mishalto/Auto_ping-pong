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
    Player player2;

    // Timer
    sf::Clock timer;
public:
    // Declarated constuctor
    GameEngine();

    // Video methods
    void draw();
    sf::RenderWindow& getWindow();

    // Collision methods
    void offScreenCollision();
    void objectsCollision();
    void objectsCollisionP2();
    // Physics methods
    void update();

};
