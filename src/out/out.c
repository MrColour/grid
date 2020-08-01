/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:38:19 by home              #+#    #+#             */
/*   Updated: 2020/07/31 22:54:23 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "out.h"

void	fill_color(int *r, int *g, int *b, int hex_color)
{
	// *r = (hex_color >> 16) & 0xFF;
	// *g = (hex_color >>  8) & 0xFF;
	// *r = 0;
	*g = 0;
	*b = (hex_color >>  0) & 0xFF;
	*r = ((hex_color >>  8) & 0x6F) & *b;
}

/**
* \brief Function that constructs a SDL_Rect to be used in SDL_RenderCopy(),
* the window shall be defined as is most connivent for the graphic library,
* with the case in SDL being that a larger `x` shall be towards the right and
* a larger `y` shall be towards the bottom of the window.
*
* \param x this shall correspond to a column location on the SDL_window.
*
* \param y this shall correspond to a row location on the SDL_window.
**/
void	fill_Rect(SDL_Rect *rect, int x, int y)
{
	rect->h = 100;
	rect->w = 100;
	rect->x = x * 100;
	rect->y = y * 100;
}

void	render_loop(void)
{
	t_display	*display;

	display = get_display();
}

/**
* Function that shall handle the visualization of the simulation.
* Note that there should be no params passed in to keep code contact
* with the simulation as little.
*
* This is done so that the graphical aspect of this project shall
* be used as a module that can be removed, replaced, and easily
* changed without affecting the simulation.
*
**/
void	out(void)
{
	render_loop();
	SDL_RenderPresent(get_display()->renderer);
	SDL_RenderClear(get_display()->renderer);

	// usleep(500000);
}
