#include <memory>
#include "Include/TextManager.h"

void TextManager::LoadFont() 
{
    font.loadFromFile("./../Resources/Images/ARCADE.TTF");
}

void TextManager::TypeText(std::string text, sf::Color fontColor, sf::Vector2f position)
{
    textContent.setFont(font);
    textContent.setCharacterSize(20);
    textContent.setString(text);
    textContent.setPosition(position);
    textContent.setColor(fontColor);
}

 void TextManager::Draw(std::unique_ptr<sf::RenderWindow> &m_window) 
{
    m_window->draw(textContent);
}