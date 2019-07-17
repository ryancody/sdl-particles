#include <iostream>
#include "Systems/Collision.h"
#include "Systems/GameObject.h"
#include "tutorials/pointers.h"
#include "Screen.h"
#include <math.h>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include <time.h>
#include "Swarm.h"

using namespace std;
using namespace cppGame;

int main () {

    // seed random number gemerator with time
    srand(time(NULL));

    Screen screen;

    if(screen.init() == false) {
        cout << "error initializing SDL" << endl;
    }

    bool quit = false;

    SDL_Event event;

    Swarm swarm;

    while(true) {
        // update particles
        // draw particles

        const Particle * const pParticles = swarm.getParticles();
        for ( int i = 0; i < Swarm::NPARTICLES; i++ ) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, 255, 255, 255);
        } 
        
        /*
        int elapsed = SDL_GetTicks();
        
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);
        
        for(int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x = 0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, red, green, blue);
            }
        }
        */

        // draw the screen
        screen.update();

        // check for messages / events
        if(screen.processEvents() == false) {
            break;
        }
    }

    screen.close();
    
    return 0;
}