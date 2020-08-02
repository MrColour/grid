/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 20:55:42 by home              #+#    #+#             */
/*   Updated: 2020/08/01 22:19:23 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "out.h"

#define UNIT (100)

void	draw_grid(void)
{
	int			i;
	t_display	*display;

	i = 0;
	display = get_display();
	SDL_SetRenderDrawColor(display->renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	while (i < WIN_HEIGHT)
	{
		SDL_RenderDrawLine(display->renderer, 0, i, WIN_WIDTH, i);
		i += UNIT;
	}
	i = 0;
	while (i < WIN_WIDTH)
	{
		SDL_RenderDrawLine(display->renderer, i, 0, i, WIN_HEIGHT);
		i += UNIT;
	}
	SDL_SetRenderDrawColor(display->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
}

void	draw_axis(void)
{
	t_display	*display;

	display = get_display();
	SDL_SetRenderDrawColor(display->renderer, 100, 200, 255, SDL_ALPHA_OPAQUE);

	SDL_RenderDrawLine(display->renderer, WIN_WIDTH / 2, 0, WIN_WIDTH / 2, WIN_HEIGHT);
	SDL_RenderDrawLine(display->renderer, 0, WIN_HEIGHT / 2, WIN_WIDTH, WIN_HEIGHT / 2);

	SDL_SetRenderDrawColor(display->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
}

void	SDL_RenderDrawPoint_Wrapper(void *ptr, int x, int y)
{
	SDL_Renderer	*renderer;

	renderer = ptr;
	SDL_RenderDrawPoint(renderer, x, y);
}

void	draw_circle_axis(void)
{
	t_circle	axis;
	t_display	*display;

	axis.pos.x = WIN_WIDTH / 2;
	axis.pos.y = WIN_HEIGHT / 2;

	axis.radius = 200;
	display = get_display();
	SDL_SetRenderDrawColor(display->renderer, 100, 200, 255, SDL_ALPHA_OPAQUE);
	out_circle(axis, SDL_RenderDrawPoint_Wrapper, display->renderer);
	SDL_SetRenderDrawColor(display->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
}
