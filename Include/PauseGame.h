#ifndef PAUSEGAME_H
#define PAUSEGAME_H

#include <memory>

#include <SFML/Graphics/Text.hpp>

#include "State.h"
#include "Game.h"

class PauseGame : public Engine::State
{
private:
    std::shared_ptr<Context> m_context;
    sf::Text m_pauseTitle;

public:
    PauseGame(std::shared_ptr<Context> &context);
    ~PauseGame();

    void Init() override;
    void ProcessInput() override;
    void Update(sf::Time deltaTime) override;
    void Draw() override;
};

#endif
