#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace cppGame {

    struct Particle {
        double m_x;
        double m_y;

        double m_xSpeed;
        double m_ySpeed;


        public:
            Particle();
            virtual ~Particle();
            void update();
    };
}

#endif