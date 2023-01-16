#include <iostream>
#include <SFML/Graphics.hpp>

#include "Include/DrawMap.h"

DrawMap::DrawMap(/* args */)
{
}

DrawMap::~DrawMap()
{
}



void DrawMap::Draw_map(std::unique_ptr<sf::RenderWindow> &m_window)
{
    sf::Sprite sprite;
    sf::Texture texture;

    if(!texture.loadFromFile("./../Resources/Images/Racing.jpg"))
    {
        std::cout << "error";
    }
    texture.setSmooth(true);
    sprite.setTexture(texture);

    m_window->draw(sprite);
}
