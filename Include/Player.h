
#ifndef RACECAR_H
#define RACECAR_H

#include <list>
#include <SFML/Graphics.hpp>

class RaceCar : public sf::Drawable
{
    private:

    sf::Sprite car;

    public:

    RaceCar();
    ~RaceCar();

    void Init(const sf::Texture &texture);
    void Move(const sf::Vector2f &direction);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif