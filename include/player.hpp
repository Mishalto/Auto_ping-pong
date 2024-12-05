#pragma once

#include <SFML/Graphics.hpp>

#include "Constants.hpp"

class Player
{
private:
    sf::RectangleShape player;

    float globalSpeed;
    float currentSpeed;

    float xSize;
    float ySize;
public:
    // Constuctor declarated
    Player();

    // Getter for display
    sf::RectangleShape& getShape();

    // Getters
    sf::FloatRect getGlobalBounds() const;
    float getCurrentSpeed() const;

    // Update status
    void update();

    // Input detect
    void checkInput();
};
