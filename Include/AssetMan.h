#ifndef ASSETMAN_H
#define ASSETMAN_H

#include <map>
#include <memory>

#include <SFML/Graphics.hpp>

namespace Engine
{
    class AssetMan
    {
        private:

        std::map<int, std::unique_ptr<sf::Texture>> m_texture;
        std::map<int, std::unique_ptr<sf::Font>> m_fonts;

        public:
        AssetMan();
        ~AssetMan();

        void AddTexture(int id, const std::string& filepath, bool isRepeated = false);
        void AddFont(int id, const std::string& filepath);
        //void DrawMap(std::unique_ptr<sf::RenderWindow> &m_window);

        const sf::Texture &GetTexture(int id) const;
        const sf::Font    &GetFont(int id) const;
    };
}


#endif