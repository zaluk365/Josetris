#include "Player.h"
#include <iostream>

using namespace jplayer;

Player::Player(float _width, float _height)
{
    shape.setSize(sf::Vector2f(_width, _height));
}
void Player::setPosition(float _x, float _y){
    // establece posicion inicial
    shape.setPosition(_x, _y);
}

void Player::setColor(sf::Color color)
{
    shape.setFillColor(sf::Color::Red);
}
void Player::move(float _x, float _y)
{   
    shape.move(_x, _y);
}

sf::RectangleShape Player::getShape()
{
    return shape;
}
Player::~Player()
{
}