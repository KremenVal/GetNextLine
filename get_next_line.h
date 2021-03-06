/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkremen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 12:27:29 by vkremen           #+#    #+#             */
/*   Updated: 2018/11/12 11:22:25 by vkremen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# include "./libft/includes/libft.h"
# define CHECK(x) if (!(x)) return (-1);
# define RETZ(x) if (x == 0) return (0);

int		get_next_line(int fd, char **line);

#endif
