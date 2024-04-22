/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myhunter-noe.kurata
** File description:
** openwindow.c
*/

#include "../include/my.h"

void menu_click(sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPosition(window);
    if (event.type == sfEvtMouseButtonPressed && (mouse.x >= 705 &&
    mouse.x <= 1216 && mouse.y >= 284 && mouse.y <= 795)) {
        gamesprites(window, event);
    }
}

void closewindow(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void main2(sfRenderWindow *window, sfEvent event,
    sfSprite *bgsprite, sfSprite *butsprite)
{
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            closewindow(window, event);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, bgsprite, NULL);
        sfRenderWindow_drawSprite(window, butsprite, NULL);
        sfRenderWindow_display(window);
        menu_click(window, event);
        }
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfTexture *bgtexture = sfTexture_createFromFile("./im/bg.png", NULL);
    sfSprite *bgsprite = sfSprite_create();
    sfTexture *buttexture = sfTexture_createFromFile("./im/start.png", NULL);
    sfSprite *butsprite = sfSprite_create();
    sfEvent event;
    sfVector2f bgscale = {1, 1};
    sfVector2f butscale = {1, 1};
    sfVector2f butpos = {705, 285};

    sfSprite_setTexture(bgsprite, bgtexture, sfTrue);
    sfSprite_setScale(bgsprite, bgscale);
    sfSprite_setTexture(butsprite, buttexture, sfTrue);
    sfSprite_setScale(butsprite, butscale);
    sfSprite_setPosition(butsprite, butpos);
    window = sfRenderWindow_create(mode, "My Hunter: World Cup Edition",
    sfResize | sfClose, NULL);
    main2(window, event, bgsprite, butsprite);
}