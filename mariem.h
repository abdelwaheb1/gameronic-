#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <string.h>

typedef struct perso_sec
{
	SDL_Rect position;
	int health;
	SDL_Surface* image;
	int collision;
	SDL_Surface* up[6];
	SDL_Surface* left[6];
	SDL_Surface* right[6];
}perso_sec;

void initperso(perso_sec* p,int x,int y);
void afficherperso(perso p,SDL_Surface *screen);
void deplacement(perso* p,SDL_Event event,SDL_Surface *screen);
#endif
