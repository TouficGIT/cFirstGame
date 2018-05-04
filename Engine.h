#pragma once
#include "SFML/Graphics.hpp"
#include "Hero.h"

using namespace sf;

class Engine {
private:
    //fenêtre de jeu
    RenderWindow m_Window;

    //déclaration d'une texture et d'un sprite pour le fond d'écran
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    //une instance de hero
    Hero m_Hero;

    void input();

    void update(float dtAsSeconds);

    void draw();

public:
    //Le constructeur d'Engine
    Engine();

    //start appel toutes les fonctions private
    void start();
};

