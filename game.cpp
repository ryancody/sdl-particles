#include <iostream>
#include "Systems/Collision.h"
#include "Systems/GameObject.h"
#include "tutorials/pointers.h"
#include "Screen.h"
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
        for(int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x = 0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, 0, 255, 0);
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