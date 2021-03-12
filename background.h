#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <string.h>

void init_background (int x , int y );
void affichage_background (SDL_Surface *screen,SDL_Surface *image);
void scrolling (SDL_Surface *screen,SDL_Surface *image,int x,int y );

#endif
