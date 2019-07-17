#include <iostream>
#include "Systems/Collision.h"
#include "Systems/GameObject.h"
#include "tutorials/pointers.h"
#include "Screen.h"
#include <math.h>
#include <SDL2/SDL.h>

using namespace std;
using namespace cppGame;

int main () {

    Screen screen;

    if(screen.init() == false) {
        cout << "error initializing SDL" << endl;
    }

    bool quit = false;

    SDL_Event event;

    while(true) {
        // update particles
        // draw particles
        int elapsed = SDL_GetTicks();
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);
        
        for(int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x = 0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, red, green, blue);
            }
        }

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