#include "Include/Player.h"

Player::Player() 
{

}

Player::~Player()
{   
}

void Player::Init(const sf::Texture &texture)
{
    float x = 16.f;
    player.setTexture(texture);
    player.setPosition(375,400);
    //x+= 16.f;
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(player);
}

void Player::Move(const sf::Vector2f &direction)
{
    player.setPosition(direction);
}