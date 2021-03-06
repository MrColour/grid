/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:47:28 by home              #+#    #+#             */
/*   Updated: 2020/08/02 01:43:19 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "out.h"

void	ctoRGB(int color, int *r, int *g, int *b)
{
	*r = (color >> 16) & 0xFF;
	*g = (color >>  8) & 0xFF;
	*b = (color >>  0) & 0xFF;
}

void	SDLU_SetRenderDrawColor(int color)
{
	int	r, g, b;

	ctoRGB(color, &r, &g, &b);
	SDL_SetRenderDrawColor(get_display()->renderer, r, g, b, SDL_ALPHA_OPAQUE);
}
