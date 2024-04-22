/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** structures.h
*/


#ifndef STRCUTURES_H_
    #define STRUCTURES_H_
    #include "radar.h"

typedef struct {
	int point_count;
    sfVector2f *points;
	float *axis_slopes;
} transformed_shape_t;

typedef struct {
	sfTexture *text;
	sfSprite *sprite;
} bg_t;

typedef struct {
	sfTexture *text;
	sfVector2f start;
	sfVector2f end;
	sfVector2f mov;
	sfRectangleShape *rect;
	transformed_shape_t *trans;
} spriteplane_t;

typedef struct {
	sfTexture *text;
	sfVector2f pos;
	sfCircleShape *circle;
} spritetower_t;

typedef struct {
	int x1;
	int y1;
	int x2;
	int y2;
	int speed;
	int delay;
	int display;
	spriteplane_t sprite;
	struct plane_s *next;
	struct plane_s *prec;
} plane_t;

typedef struct {
	int tx;
	int ty;
	int rad;
	int display;
	spritetower_t sprite;
	struct tower_s *next;
} tower_t;

typedef struct {
	plane_t *plane;
	tower_t *tower;
} item_t;

#endif
