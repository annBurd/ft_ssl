/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_md5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburdeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 19:27:00 by aburdeni          #+#    #+#             */
/*   Updated: 2018/10/27 19:27:02 by aburdeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ssl.h"

static t_flag	f;

void			ft_md5(void)
{
	char	*out;
	// int		i;

	printf("md5\n");




	write(1, out, ft_strlen(out));
	free(out);

	// i = 0;
	// while (i < n)
	// {
	// 	ft_bzero(&f, sizeof(t_flag));
	// 	if (ft_strequ(arg[i]), "-p")
	// 		f.f - ft_getline()
	// 	else if (ft_strequ(arg[i]), "-q")
	// 		f.q = 1;
	// 	else if (ft_strequ(arg[i]), "-r")
	// 		f.r = 1;
	// 	else if (ft_strequ(arg[i]), "-s")
	// 		f.s = arg[++i];
	// 	else
	// 		f.f = arg[++i];
	// 	i++;
	// }
	// return (res);
}
