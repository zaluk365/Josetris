#include "Game.h"

using namespace josetris;

Game::Game(void)
{
    // crea la instancia de ventana
    mainWindow.create(sf::VideoMode(WIDTH, HEIGHT), "Josetris", sf::Style::Default);
}

void Game::processEvents(void)
{
    sf::Event event;
    while (mainWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            mainWindow.close();
    }
}

void Game::update(void)
{
}

void Game::renderPlayers(void)
{
    std::vector<jplayer::Player>::iterator player;
    for (player = players.begin(); player != players.end(); player++)
        mainWindow.draw(player->getShape());
}

void Game::render(void)
{
    mainWindow.clear();
    renderPlayers();
    mainWindow.display();
}

void Game::addPlayer(jplayer::Player player)
{
    players.push_back(player);
}

void Game::run(void)
{
    while (mainWindow.isOpen())
    {
        processEvents();
        update();
        render();
    }
}