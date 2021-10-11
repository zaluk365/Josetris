
#include <iostream>

#include "Game.h"
#include "Player.h"

using namespace jplayer;
using namespace josetris;

int main()
{
    Game josetris;

    Player jose = Player(100.0, 100.0);
    jose.setColor(sf::Color::Blue);
    Player mami = Player(300.0, 100.0);
    mami.setColor(sf::Color::Green);

    josetris.addPlayer(jose);
    josetris.addPlayer(mami);
    josetris.run();
    
    return 0;
}

/*
sf::RenderWindow window(sf::VideoMode(720, 480), "SFML works!", sf::Style::Default);
    sf::RectangleShape player(sf::Vector2f(100.0, 100.0));
    player.setFillColor(sf::Color::Green);
    player.setPosition(100.0, 0.0);
    Player Jose = Player(100.0, 100.0, 50.0, 50.0);
    Jose.setColor(sf::Color::Red);
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                Jose.move(-1, 0.0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                Jose.move(1, 0.0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                Jose.move(0.0, -1);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                Jose.move(0.0, 1);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                player.move(0.0, 0.1);
        }
        window.clear();
        window.draw(Jose.getShape());
        window.draw(player);
        window.display();
*/