/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeon <hjeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 15:39:24 by hyekim            #+#    #+#             */
/*   Updated: 2020/06/17 15:36:32 by hjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MINISHELL_H
#	define MINISHELL_H
#	include <stdio.h>
#	include <sys/wait.h>
#	include <sys/types.h>
#	include "./get_next_line.h"
#	include "./libft.h"

#	define ERROR -1
#	define SUCCESS 0

char	**init_env(char *envp[]);
void	*free_split(char **splitted_str);
char	**split_command(char *str);
int		get_name(char *str);


#	endif
