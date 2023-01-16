#include "Include/SoundManager.h"

void SoundManager::LoadSound() 
{
    sblaser.loadFromFile("./../Resources/Sounds/Laser1.wav");
    sbExplosion.loadFromFile("./../Resources/Sounds/Explosion-Hard.wav");
    sbSpaceshipDead.loadFromFile("./../Resources/Sounds/Explosion-Cabana.wav");
    Lasersound.setBuffer(sblaser);
    Explosionsound1.setBuffer(sbExplosion);
    SpaceShipDead.setBuffer(sbSpaceshipDead);

}

void SoundManager::getLaser()
{
    return Lasersound.play();
}

void SoundManager::getExplosion()
{
    return Explosionsound1.play();
}

 void SoundManager::getSpaceShipDead()
 {
    return SpaceShipDead.play();
 }