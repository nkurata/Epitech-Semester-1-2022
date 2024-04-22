/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** hitboxes.c
*/

#include "../includes/radar.h"

sfRectangleShape *rect_hitbox(spriteplane_t plane)
{
	sfRectangleShape *rec = sfRectangleShape_create();
	sfVector2f size = {40, 40};
	sfVector2f origin = {20, 20};

	sfRectangleShape_setSize(rec, size);
	sfRectangleShape_setOutlineThickness(rec, 2);
	sfRectangleShape_setOutlineColor(rec, sfCyan);
	sfRectangleShape_setTexture(rec, plane.text, sfTrue);
	sfRectangleShape_setOrigin(rec, origin);
	sfRectangleShape_setRotation(rec, 0);
	sfRectangleShape_setPosition(rec, plane.start);
	return (rec);
}
