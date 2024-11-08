#ifndef SCHISM_SDLMAIN_H_
#define SCHISM_SDLMAIN_H_

#ifdef SCHISM_SDL2
#include <SDL.h>
#include <SDL_thread.h>
#include <SDL_syswm.h>
#elif defined(SCHISM_SDL12)
#include <SDL/SDL.h>
#endif

#endif /* SCHISM_SDLMAIN_H_ */
