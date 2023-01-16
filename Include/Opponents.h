#ifndef OPPONENTS_H
#define OPPONENTS_H

#include <list>
#include <SFML/Graphics.hpp>

class Opponents : public sf::Drawable
{
    private:

    sf::Sprite car;

    public:
    Opponents();
    ~Opponents();

    void Init(const sf::Texture &texture);
    void Move(const sf::Vector2f &direction);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    int getRandomNumber(int a, int b);
};

#endif