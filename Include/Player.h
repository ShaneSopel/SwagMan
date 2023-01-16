
#ifndef RACECAR_H
#define RACECAR_H

#include <list>
#include <SFML/Graphics.hpp>

class Player : public sf::Drawable
{
    private:

    sf::Sprite player;

    public:

    Player();
    ~Player();

    void Init(const sf::Texture &texture);
    void Move(const sf::Vector2f &direction);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif