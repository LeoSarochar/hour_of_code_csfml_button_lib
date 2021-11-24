/*
** EPITECH PROJECT, 2021
** button_lib
** File description:
** button_lib
*/

#ifndef BUTTON_LIB_H_
#define BUTTON_LIB_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include <SFML/Graphics.h>

typedef struct button_s
{
    char *title;
    sfVector2f pos;
    sfVector2f size;
    sfColor color;
    sfColor hover_color;
    sfColor text_color;
} button_t;

const button_t buttons[] = {
    {"Button 1", {100, 100}, {200, 50}, (sfColor){255, 255, 255, 255}, (sfColor){255, 0, 0, 255}, (sfColor){0, 0, 0, 255}},
    {"Button 2", {100, 200}, {200, 50}, (sfColor){0, 255, 0, 255}, (sfColor){255, 0, 0, 255}, (sfColor){0, 0, 0, 255}},
};

#define NB_BUTTONS (sizeof(buttons) / sizeof(button_t))

#endif /* !BUTTON_LIB_H_ */
