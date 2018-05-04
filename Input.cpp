#include "Engine.h"

void Engine::input() {
    if(Keyboard::isKeyPressed(Keyboard::Escape)){
        m_Window.close();
    }

    if(Keyboard::isKeyPressed(Keyboard::Q)){
        m_Hero.moveLeft();
    }

    else {
        m_Hero.stopLeft();
    }

    if(Keyboard::isKeyPressed(Keyboard::D)){
        m_Hero.moveRight();
    }

    else {
        m_Hero.stopRight();
    }


}
