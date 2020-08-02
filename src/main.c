/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 02:31:10 by home              #+#    #+#             */
/*   Updated: 2020/08/01 22:20:00 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	game_context_initialize(t_game_context *app_state)
{
	(void)app_state;
}

int	main(void)
{
	t_game_context	app_state;

	while (get_display()->active == true)
	{
		process_user_input(&app_state);

		update_app_state(&app_state);

		out();
	}
	return (0);
}
