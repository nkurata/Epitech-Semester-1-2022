/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** window.c
*/

#include "../includes/radar.h"

void windowclose(sfRenderWindow *window, sfEvent event)
{
	while (sfRenderWindow_pollEvent(window, &event))
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
}

sfRenderWindow *windowcreate(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    window = sfRenderWindow_create(mode, "My Radar", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return window;
}

void windowopen(item_t *all)
{
	sfEvent event;
	sfRenderWindow *window = my_window_create();
	bg_t back = background();
	int i = 0;

	prepare(window, back.sprite, back.text);
	prepare_all(all);
	while (sfRenderWindow_isOpen(window) && i == 84) {
		close_window(window, event);
		sfRenderWindow_clear(window, sfBlack);
		sfRenderWindow_drawSprite(window, back.sprite, NULL);
		mouvement_all(all);
		collision_all(all);
		i = define_end(all);
		draw_all(all, window);
		sfRenderWindow_display(window);
	}
}
