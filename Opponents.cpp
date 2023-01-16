#include "Include/Opponents.h"

Opponents::Opponents() 
{

}

Opponents::~Opponents()
{   
}

void Opponents::Init(const sf::Texture &texture)
{
    float x = 16.f;
    car.setTexture(texture);
}

void Opponents::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(car);
}

void Opponents::Move(const sf::Vector2f &direction)
{
    car.setPosition(direction);
}

int Opponents::getRandomNumber(int a, int b)
{
    static bool first = true; if (first){srand( time(NULL) );first = false;}
    int result=a + rand() % (( b + 1 ) - a);
    result=(result/10)*10;
    return result;
}