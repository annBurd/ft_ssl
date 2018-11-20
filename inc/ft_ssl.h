/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburdeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 19:28:09 by aburdeni          #+#    #+#             */
/*   Updated: 2018/10/27 19:28:12 by aburdeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSH_H
# define FT_PRINTF_H

# include "libft.h"
# include "color.h"
# include "ft_printf.h"

# include <stdio.h>

/*
** -p, echo STDIN to STDOUT and append the checksum to STDOUT
** -q, quiet mode
** -r, reverse the format of the output.
** -s, print the sum of the given string
*/

typedef struct	s_flag
{
	char		*p;
	short		q;
	short		r;
	char		*s;
	char		*f;
}				t_flag;

extern t_flag	f;
// void	ssl_exit(int code, char *s);

void	ft_md5(void);
void	ft_sha256(void);

#endif
