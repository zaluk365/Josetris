#pragma once
#ifndef JOSETRIS_PLAYER_H
#define JOSETRIS_PLAYER_H

#include <SFML/Graphics.hpp>

#define SPEED 100.0

namespace jplayer
{
    class Player
    {
    private:
        sf::RectangleShape shape;

    public:
        Player(float _with, float _height);
        void setColor(sf::Color);
        void move(float x, float y);
        void setPosition(float x, float y);
        sf::RectangleShape getShape();
        ~Player();
    };
}

#endif //JOSETRIS_PLAYER_H