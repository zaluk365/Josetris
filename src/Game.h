#pragma once
#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"

namespace josetris
{
    class Game
    {
    private:
        std::vector<jplayer::Player> players;
        sf::RenderWindow mainWindow;

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