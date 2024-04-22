/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myhunter-noe.kurata
** File description:
** game.c
*/

#include "../include/my.h"

void move_ball(sfRenderWindow *window,
    sfSprite *bgsprite, sfSprite *ballsprite, float turn)
{
    sfVector2f ballpos = {1, 1};
    sfSprite_setPosition(ballsprite, ballpos);
    for (ballpos; ballpos.x < 1920; ballpos.x++) {
        sfWindow_setFramerateLimit(ballsprite, 30);
        sfRenderWindow_clear(window, sfBlack);
        sfSprite_move(ballsprite, ballpos);
        sfSprite_setRotation(ballsprite, turn);
        sfRenderWindow_drawSprite(window, bgsprite, NULL);
        sfRenderWindow_drawSprite(window, ballsprite, NULL);
    }
}

void game(sfRenderWindow *window, sfEvent event,
    sfSprite *bgsprite, sfSprite *ballsprite)
{
    float turn = 0;
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            closewindow(window, event);
            }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, bgsprite, NULL);
        turn += 0.3;
        move_ball(window, bgsprite, ballsprite, turn);
        sfRenderWindow_display(window);
    }
}

void gamesprites(sfRenderWindow *window, sfEvent event)
{
    sfTexture *bgtexture = sfTexture_createFromFile("./im/bg.png", NULL);
    sfSprite *bgsprite = sfSprite_create();
    sfVector2f bgscale = {1, 1};
    sfTexture *balltexture = sfTexture_createFromFile("./im/ball.png", NULL);
    sfSprite *ballsprite = sfSprite_create();
    sfSprite_setTexture(bgsprite, bgtexture, sfTrue);
    sfSprite_setScale(bgsprite, bgscale);
    sfVector2f ballscale = {0.30, 0.30};
    sfVector2f ballorigin = {250, 250};
    sfSprite_setTexture(ballsprite, balltexture, sfTrue);
    sfSprite_setScale(ballsprite, ballscale);
    sfSprite_setOrigin(ballsprite, ballorigin);
    game(window, event, bgsprite, ballsprite);
}
