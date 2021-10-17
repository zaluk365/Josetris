#pragma once

#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>

#define MAX_MENU_OPTIONS 3

namespace jmenu
{
    class Menu
    {
    private:
        int SelectedItem;
        sf::Font font;
        sf::Text item[MAX_MENU_OPTIONS];

    public:
        Menu(float _width, float _height);
        void draw(sf::RenderWindow &window);
        ~Menu();
    };
}

#endif // MENU_H
