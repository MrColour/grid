/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 11:30:10 by home              #+#    #+#             */
/*   Updated: 2020/07/31 22:54:05 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "out.h"
#include "structs.h"

void	process_user_input(t_game_context *app_state)
{
	SDL_Event		e;
	const Uint8		*keystate;

	while (SDL_PollEvent(&e) != 0)
	{
		if (e.type == SDL_QUIT)
		{
			get_display()->active = false;
			break ;
		}
	}
	keystate = SDL_GetKeyboardState(NULL);
	(void)app_state;
}
