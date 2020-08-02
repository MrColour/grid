/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 20:55:42 by home              #+#    #+#             */
/*   Updated: 2020/08/01 21:21:56 by home             ###   ########.fr       */
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
