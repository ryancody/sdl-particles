#include "Particle.h"
#include <stdlib.h>

namespace cppGame {

    Particle::Particle(): m_x(0), m_y(0) {
        m_xSpeed = 0.01 * ( ((2.0 * rand()) / RAND_MAX) - 1);
        m_ySpeed = 0.01 * ( ((2.0 * rand()) / RAND_MAX) - 1);
    }

    Particle::~Particle() {

    }

    void Particle::update() {
        
        m_x += m_xSpeed;
        m_y += m_ySpeed;

        if(m_x < -1 || m_x > 1) {
            m_xSpeed *= -1;
        }

        if(m_y < -1 || m_y > 1 ) {
            m_ySpeed *= -1;
        }
    }
}