#include <iostream>
#include "Hero.h"

//creation d'une nouvelle instance de hero
Hero::Hero() {
    //Vitesse du hero
    m_Speed = 400;
    m_CounterAnimation = 0;
    //Associationde la texture
    if(!m_Texture.loadFromFile("images/Hero/HeroAnim.png")) {
        std::cout<< "Impossible de charger l'image du héro" << std::endl;
        system("pause");
    }
    m_Sprite.setTexture(m_Texture);
    m_Sprite.setTextureRect(sf::IntRect(m_CounterAnimation *224,224*1,224,224));
    //Position de départ
    m_Position.x = 500;
    m_Position.y = 800;
}

//Rendre le Sprite privé disponible pour la fonction Draw()
Sprite Hero::getSprite() {
    return m_Sprite;
}

void Hero::moveLeft() {
    m_LeftPressed = true;
}

void Hero::moveRight() {
    m_RightPressed = true;
}

void Hero::stopLeft() {
    m_LeftPressed = false;
}

void Hero::stopRight() {
    m_RightPressed = false;
    m_Sprite.setTextureRect(sf::IntRect(m_CounterAnimation *224,224*1,224,224));
    m_CounterAnimation++;
    if (m_CounterAnimation == 7)
    {
        m_CounterAnimation = 0;
    }
}


//deplacement du hero selon la touche pressé
//le temps passé et la vitesse
void Hero::update(float elapsedTime) {
    if(m_RightPressed)
    {
        m_Sprite.setTextureRect(sf::IntRect(m_CounterAnimation *224,224*2,224,224));
        m_Position.x += m_Speed * elapsedTime;
        m_CounterAnimation++;
        if (m_CounterAnimation == 7)
        {
            m_CounterAnimation = 0;
        }
    }

    if(m_LeftPressed)
    {
        m_Sprite.setTextureRect(sf::IntRect(m_CounterAnimation *224,224*3,224,224));
        m_Position.x -= m_Speed * elapsedTime;
        m_CounterAnimation++;
        if (m_CounterAnimation == 7)
        {
            m_CounterAnimation = 0;
        }
    }
    m_Sprite.setPosition(m_Position);

}


