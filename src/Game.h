#pragma once
#ifndef GAME_H
#define GAME_H

#define WIDTH 720
#define HEIGHT 480

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Menu.h"

namespace josetris
{
    class Game
    {
    private:
        std::vector<jplayer::Player> players;
        sf::RenderWindow mainWindow;
        jmenu::Menu mainMenu = jmenu::Menu(WIDTH, HEIGHT);

    private:
        void processEvents(void);
        void update(void);
        void render(void);
        void renderPlayers(void);

    public:
        Game(void);
        void addPlayer(jplayer::Player player);
        void run(void);
    };
}

#endif