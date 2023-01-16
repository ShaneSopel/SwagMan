

#include <iostream>
#include <list>
#include <memory>
#include <SFML/Graphics.hpp>

#include "Include/AssetMan.h"
#include "Include/Game.h"
#include "Include/Menu.h"

using namespace Engine;

Game::Game() : m_context(std::make_shared<Context>())
{
    m_context->m_window->create(sf::VideoMode(800, 600), "SwagRacing", sf::Style::Close);
    m_context->m_states->Add(std::make_unique<Menu>(m_context));
    m_context->m_window->setFramerateLimit(60);
}
Game::~Game()
{
}

void Game::Run()
{

    sf::Clock clock;
    sf::Time timeSinceLastFrame = sf::Time::Zero;

    while (m_context->m_window->isOpen())
    {
       timeSinceLastFrame += clock.restart();

        while (timeSinceLastFrame > FRAMES_PER_SECOND)
        {
           timeSinceLastFrame -= FRAMES_PER_SECOND;

            m_context->m_states->ProcessStateChange();
            m_context->m_states->getCurrent()->ProcessInput();
            m_context->m_states->getCurrent()->Update(FRAMES_PER_SECOND);
            m_context->m_states->getCurrent()->Draw();
    
       }
    }

}
