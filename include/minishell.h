/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyekim <hyekim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 15:39:24 by hyekim            #+#    #+#             */
/*   Updated: 2020/06/17 16:07:54 by hyekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MINISHELL_H
#	define MINISHELL_H
#	define ERROR -1
#	define SUCCESS 0
#	include <stdio.h>
#	include <sys/wait.h>
#	include <sys/types.h>
#	include "./get_next_line.h"
#	include "./libft.h"

char	**init_env(char *envp[]);
void	*free_split(char **splitted_str);
char	**split_command(char *str);


#	endif
