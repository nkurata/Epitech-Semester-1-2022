/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** planemov.c
*/

#include "../includes/radar.h"

sfVector2f mouvement(sfVector2f start, sfVector2f end)
{
    sfVector2f mouvement;

    if (start.x == end.x) {
        mouvement.x = 0;
        if (start.y > end.y)
        	mouvement.y = -1;
        if (start.y < end.y)
        	mouvement.y = 1;
        return (mouvement);
    }
    if (start.x < end.x) {
        mouvement.x = 1;
        mouvement.y = (start.y - end.y) / (start.x - end.x);
    }
    if (start.x > end.x) {
        mouvement.x = -1;
        mouvement.y = -(start.y - end.y) / (start.x - end.x);
    }
    return mouvement;
}
