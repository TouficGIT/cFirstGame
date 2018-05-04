#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;

class Hero
{
private:
    //Position du hero
    Vector2f m_Position;

    //Déclaration du sprite
    Sprite m_Sprite;

    //et de la texture
    Texture m_Texture;
    Image m_Image;

    bool m_LeftPressed;
    bool m_RightPressed;

    float m_Speed;

public:
    //constructeur
    Hero();

    //Envoi d'un copie du sprite au main
    Sprite getSprite();

    void moveLeft();

    void moveRight();

    void stopLeft();

    void stopRight();

    void update(float elapsedTime);

};

