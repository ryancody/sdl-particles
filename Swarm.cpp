#include "Swarm.h"

namespace cppGame {

    Swarm::Swarm() {

        m_pParticles = new Particle[NPARTICLES];
    }

    Swarm::~Swarm(){
        delete [] m_pParticles;
    }
}