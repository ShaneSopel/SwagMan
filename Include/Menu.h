#ifndef MENU_H
#define MENU_H

#define MAX_NUMBER_OF_ITEMS 3

#include <memory>
#include <SFML/Graphics.hpp>

#include "DrawMap.h"
#include "Game.h"
#include "State.h"

class Menu : public Engine::State
{
    private:
    sf::Font font;
    sf::Text text[MAX_NUMBER_OF_ITEMS];
    std::shared_ptr<Context> m_context;
    sf::Sprite swag;
    sf::Texture swaglogo;

    sf::Sprite swag1;
    sf::Texture swaglogo1;

    DrawMap draw;

    bool m_isPlayButtonSelected;
    bool m_isPlayButtonPressed;
    bool m_isOptionsButtonSelected;
    bool m_isOptionsButtonPressed;
    bool m_isExitButtonSelected;
    bool m_isExitButtonPressed;

    public:
    Menu(std::shared_ptr<Context> &context);
    ~Menu();

    void Draw() override;
    void Init() override;
    void ProcessInput() override;
    void Update(sf::Time deltaTime) override;

    void Pause() override;
    void Start() override;


};

#endif 