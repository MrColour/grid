/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 03:05:42 by home              #+#    #+#             */
/*   Updated: 2020/08/02 02:13:47 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUT_H
# define OUT_H

# include <stdbool.h>
# include <unistd.h>

# include <SDL2/SDL.h>
# include <SDL_image.h>

# include "color.h"
# include "more_math.h"

# define WIN_TITLE "GRID"

# define WIN_WIDTH  (1000)
# define WIN_HEIGHT (1000)

# define WIN_POS_X (2000)
# define WIN_POS_Y (50)

# define TILE_SIZE (100)

# define UNIT (200)

typedef struct	s_display
{
	bool			active;
	SDL_Window		*window;
	SDL_Renderer	*renderer;
}				t_display;

t_display	*get_display(void);

void		SDLU_start(t_display *dest);
void		SDLU_close(void);

void		ctoRGB(int color, int *r, int *g, int *b);
void		SDLU_SetRenderDrawColor(int color);

void		draw_grid(void);
void		draw_axis(void);
void		draw_circle_axis(void);
void		draw_vector(t_vector2f start, t_vector2f end);

void		out_vector(t_vector2f end);

void		out(void);

#endif
