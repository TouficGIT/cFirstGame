#include "Engine.h"

Engine::Engine() {
    //recupération de la taille de lécran et creation de la vue SFML
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Window.create(VideoMode(resolution.x,resolution.y),"Mon premier jeu",Style::Fullscreen);

    m_BackgroundTexture.loadFromFile("images/Background/background.jpg");
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start() {
    //Timing
    Clock clock;
    while (m_Window.isOpen())
    {
        //Restart de l'horloge et sauvegarde du temps passé (elapsedTime) dans dt
        Time dt = clock.restart();
        float dtAsSeconds = dt.asSeconds();
        input();
        update(dtAsSeconds);
        draw();

    }
}
