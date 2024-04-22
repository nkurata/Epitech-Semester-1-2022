/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** structures.c
*/

#include "../includes/radar.h"

bg_t background(void)
{
	bg_t back;

	back.text = sfTexture_createFromFile("im/map.png", NULL);
	back.sprite = sfSprite_create();
	return back;
}

spriteplane_t plane(plane_t *s)
{
    spriteplane_t plane;

    plane.text = sfTexture_createFromFile("im/plane.png", NULL);
    plane.start.y = s->y1 * 10;
    plane.start.x = s->x1 * 10;
    plane.end.y = s->y2 * 10;
    plane.end.x = s->x2 * 10;
    plane.mov = mouvement(plane.start, plane.end);
    plane.rect = rectangle_hitbox(plane);
    return plane;

}
