/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 02:38:32 by home              #+#    #+#             */
/*   Updated: 2020/07/31 23:40:33 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASTER_H
# define MASTER_H

# include <stdio.h>

# include <SDL_image.h>

# include "structs.h"
# include "more_math.h"
# include "out.h"

# define NAN_VAL (0) //Once set up is done, code should compile with this macro deleted.

void		process_user_input(t_game_context *app_state);
void		update_app_state(t_game_context *app_state);

// void		itow(int n, SDL_Rect dest, t_display *dislay);

#endif
