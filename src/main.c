/*
** EPITECH PROJECT, 2021
** button_lib
** File description:
** main
*/

#include "button_lib.h"

sfRenderWindow *create_window(unsigned int width, unsigned int height, char *title)
{
    // Create the window of size width x height
    // Return the window
}

int button_is_hover(sfRenderWindow *window, button_t button)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    // Check if the mouse is on the button, return 1 if true else 0
}

void draw_button_text(sfRenderWindow *window, sfFont *font, button_t button)
{
    sfText *text = sfText_create();
    sfVector2f text_pos = // Get the text position to the middle

    // Set the text string
    // Set the text font
    // Set the text size
    // Set the text position
    // Set the text color
    // Draw the text in the render window
    // Destroy the text
}

void draw_buttons(sfRenderWindow *window, sfFont *font)
{
    sfRectangleShape *rect = NULL;

    for (unsigned int i = 0; i < NB_BUTTONS; i++) {
        // Create a rectangle shape and assign it to 'rect'
        // Set the position of the rectangle to the button's position
        // Set the size of the rectangle to the button's size
        
        if (/* Check if the button is hover*/)
            // Set the fill color of the rectangle to the button's hover color
        else
            // Set the fill color of the rectangle to the button's color
        // Draw the rectangle shape in the render window
        draw_button_text(window, font, buttons[i]);
        sfRectangleShape_destroy(rect);
    }
}

void check_button_pressed(sfRenderWindow *window)
{
    // Loop throught the buttons array
    // If the mouse is on the button
    // printf "button.title is clicked"
}

void main_loop(sfRenderWindow *window, sfFont *font)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            // If the event is a mouse button pressed
            // Call check_button_pressed
        }
        sfRenderWindow_clear(window, sfBlack);
        // Draw the buttons
        sfRenderWindow_display(window);
    }
}

int main()
{
    // Create the window by calling create_window
    sfRenderWindow *window = 
    // Load font from file
    sfFont *font = sfFont_createFromFile("assets/arial.ttf");

    main_loop(window, font);
    return (0);
}
