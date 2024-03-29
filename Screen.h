#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

namespace cppGame {

class Screen {
public:
    const static int SCREEN_WIDTH = 1024;
    const static int SCREEN_HEIGHT = 768;

private: 
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;

public:
    Screen();
    bool init();
    void update();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    bool processEvents();
    void close();
    void clear();
};

}

#endif