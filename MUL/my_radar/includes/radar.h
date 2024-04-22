/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** bs.h
*/

#ifndef RADAR_H_
    #define RADAR_H_
    #include "phoenix.h"
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <math.h>
	#include "structures.h"

void helper(void);
int checkhelp(char *av);
void windowclose(sfRenderWindow *window, sfEvent event);
bg_t background(void);
sfRenderWindow *windowcreate(void);
void windowopen(item_t *all);
sfVector2f mouvement(sfVector2f dep, sfVector2f fin);

#endif
