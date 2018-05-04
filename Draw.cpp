#include "Engine.h"

void Engine::draw()
{
    // Effacer la dernière image
    m_Window.clear(Color::White);

    // Dessiner le fond d'écran
    m_Window.draw(m_BackgroundSprite);
    m_Window.draw(m_Hero.getSprite());

    // Tout afficher
    m_Window.display();
}

