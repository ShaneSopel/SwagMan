#ifndef DRAW_MAP_H
#define DRAW_MAP_H

#include <memory>
#include <SFML/Graphics.hpp>

class DrawMap
{
private:
    /* data */
public:
    DrawMap(/* args */);
    ~DrawMap();
    void Draw_map(std::unique_ptr<sf::RenderWindow> &m_window);

};


#endif