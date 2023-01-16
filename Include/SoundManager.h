#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <list>
#include <SFML/Audio.hpp>

class SoundManager
{
    private:

    sf::SoundBuffer sblaser;
    sf::SoundBuffer sbExplosion;
    sf::SoundBuffer sbSpaceshipDead;
    sf::Sound Lasersound;
    sf::Sound Explosionsound1;
    sf::Sound SpaceShipDead;

    public:

    void LoadSound();
    void TypeSound();
    void getLaser();
    void getExplosion();
    void getSpaceShipDead();

     
};

#endif