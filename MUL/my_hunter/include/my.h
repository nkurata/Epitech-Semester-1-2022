/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myhunter-noe.kurata-1
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #define CSFML_GRAPHICS_API CSFML_API_IMPORT
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <stdlib.h>

void closewindow(sfRenderWindow *window, sfEvent event);
void menu_click(sfRenderWindow *window, sfEvent event);
void gamesprites(sfRenderWindow *window, sfEvent event);
void game(sfRenderWindow *window,sfEvent event,
    sfSprite *bgsprite, sfSprite *ballsprite);
void move_ball(sfRenderWindow *window, sfSprite *bgsprite,
sfSprite *ballsprite, float turn);
void lives(sfRenderWindow *window, sfEvent event);

#endif