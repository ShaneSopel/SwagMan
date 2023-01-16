#ifndef GAME_H
#define GAME_H

#include <memory>

#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>

#include "AssetMan.h"
#include "StateMan.h"

enum AssetID
{
    RACECAR=0,
    OPPONENT1,
    OPPONENT2
};

struct Context
{
    std::unique_ptr<Engine::AssetMan> m_assets;
    std::unique_ptr<Engine::StateMan> m_states;
    std::unique_ptr<sf::RenderWindow> m_window;

    Context()
    {
        m_assets = std::make_unique<Engine::AssetMan>();
        m_states = std::make_unique<Engine::StateMan>();
        m_window = std::make_unique<sf::RenderWindow>();
    }

};

class Game
{
    private:

        std::shared_ptr<Context> m_context;   
        const sf::Time FRAMES_PER_SECOND = sf::seconds(1.f/60.f);

    public:
        Game();
        ~Game();

        void Run();
};

#endif 