#include "Menu.h"

using namespace jmenu;

Menu::Menu(float _width, float _height)
{
    if(!font.loadFromFile("fonts/arial.ttf")) // error al cargar la fuente de texto
        return;
    
    item[0].setString("Play");
    item[1].setString("Options");
    item[2].setString("Exit");

    for (size_t i = 0; i < MAX_MENU_OPTIONS; i++)
    {
        item[i].setFont(font);
        item[i].setColor(sf::Color::Yellow);
        item[i].setPosition(sf::Vector2f(_width / 2, _height / (MAX_MENU_OPTIONS + 1) * i));
    }

    SelectedItem = 0;
}

Menu::~Menu()
{
    //
}