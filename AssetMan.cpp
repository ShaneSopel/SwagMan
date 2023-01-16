#include <iostream>
#include "Include/AssetMan.h"

Engine::AssetMan::AssetMan()
{   
}

Engine::AssetMan::~AssetMan()
{
}

void Engine::AssetMan::AddTexture(int id, const std::string& filepath, bool isRepeated)
{
     auto texture = std::make_unique<sf::Texture>();

    if (texture->loadFromFile(filepath))
    {
        texture->setRepeated(isRepeated);
        m_texture[id] = std::move(texture);
    }

}

void Engine::AssetMan::AddFont(int id, const std::string& filepath)
{
    auto font = std::make_unique<sf::Font>();

    if (font->loadFromFile(filepath))
    {
        m_fonts[id] = std::move(font);
    }
}

/*void Engine::AssetMan::DrawMap(std::unique_ptr<sf::RenderWindow> &m_window)
{
    sf::Sprite sprite;
    sf::Texture texture;

    if(!texture.loadFromFile("/home/shanes/c++/SwagAsteroids/Resources/Images/space.png"))
    {
        std::cout << "error";
    }
    texture.setSmooth(true);
    sprite.setTexture(texture);

    m_window->draw(sprite);

}*/

const sf::Texture &Engine::AssetMan::GetTexture(int id) const
{
    return *(m_texture.at(id).get());
}

const sf::Font &Engine::AssetMan::GetFont(int id) const
{
    return *(m_fonts.at(id).get());
}
