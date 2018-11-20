/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburdeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 19:26:37 by aburdeni          #+#    #+#             */
/*   Updated: 2018/10/27 19:26:39 by aburdeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ssl.h"

static void		(*algorithm[2])(void)
{
	ft_md5,
	ft_sha256
};

static t_flag	f;

static void		ssl_exit(int code, char *s)
{
	if (code == 1)
		ft_printf("usage: ft_ssl command [command opts] [command args]\n");
	else if (code == -1)
		ft_printf("ft_ssl: Error: '%s' is an invalid command.\n\n"
		"Standard commands:\n\nMessage Digest commands:\nmd5\nsha256\n", s); //what to out?
	exit(code);
}

static int		check_alg(char *s)
{
	if (ft_strequ(s, "md5"))
		return (0);
	else if (ft_strequ(s, "sha256"))
		return(1);
	else
		ssl_exit(-2, s);
}

static void		check_flag(char ***arg)
{
	while(**argv)
	{
		if (ft_strequ(**arg), "-p")
			if (ft_getline(0, f.f) < 0)
				ssl_exit(-2, NULL);
		else if (ft_strequ(**arg), "-q")
			f.q = 1;
		else if (ft_strequ(**arg), "-r")
			f.r = 1;
		else if (ft_strequ(**arg), "-s")
		{
			f.s = ++(*arg);
			return ;
		}
		else
		{
			f.f = ++(*arg);
			return ;
		}
		(*arg)++;
	}
}

int				main(int argc, char **argv)
{
	int		num;

	argc == 1 ? ssl_exit(1, NULL) : (num = check_alg(++argv));
	while (*(++argv)) //what if there is nothing after alg?
	{
		ft_bzero(&f, sizeof(t_flag));
		check_flag(&argv)
		algorithm[num]();
	}
	return (0);
}
