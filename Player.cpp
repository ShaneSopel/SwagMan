#include "Include/RaceCar.h"

RaceCar::RaceCar() 
{

}

RaceCar::~RaceCar()
{   
}

void RaceCar::Init(const sf::Texture &texture)
{
    float x = 16.f;
    car.setTexture(texture);
    car.setPosition(375,400);
    //x+= 16.f;
}

void RaceCar::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(car);
}

void RaceCar::Move(const sf::Vector2f &direction)
{
    car.setPosition(direction);
}