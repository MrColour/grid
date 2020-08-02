/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 20:55:42 by home              #+#    #+#             */
/*   Updated: 2020/08/02 02:19:11 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "out.h"

void	draw_grid(void)
{
	int			i;
	int			cen_x;
	int			cen_y;
	t_display	*display;

	i = 0;
	cen_x = WIN_WIDTH / 2;
	cen_y = WIN_HEIGHT / 2;
	display = get_display();
	SDL_SetRenderDrawColor(display->renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	while (i + cen_y < WIN_HEIGHT)
	{
		SDL_RenderDrawLine(display->renderer, 0, cen_y + i, WIN_WIDTH, cen_y + i);
		SDL_RenderDrawLine(display->renderer, 0, cen_y - i, WIN_WIDTH, cen_y - i);
		i += UNIT;
	}
	i = 0;
	while (i + cen_x < WIN_WIDTH)
	{
		SDL_RenderDrawLine(display->renderer, cen_x + i, 0, cen_x + i, WIN_HEIGHT);
		SDL_RenderDrawLine(display->renderer, cen_x - i, 0, cen_x - i, WIN_HEIGHT);
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

	axis.radius = UNIT;
	display = get_display();
	SDL_SetRenderDrawColor(display->renderer, 100, 200, 255, SDL_ALPHA_OPAQUE);
	out_circle(axis, SDL_RenderDrawPoint_Wrapper, display->renderer);
	SDL_SetRenderDrawColor(display->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
}
