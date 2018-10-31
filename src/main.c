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

//delete all printf()
#include "../inc/ft_ssl.h"

/*
** -p, echo STDIN to STDOUT and append the checksum to STDOUT
** -q, quiet mode
** -r, reverse the format of the output.
** -s, print the sum of the given string
*/

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (ft_strequ(argv[1], "md5"))
			ft_md5(argv + 1);
		else if (ft_strequ(argv[1], "sha256"))
			printf("sha256\n");
		else
			printf("ft_ssl: Error: 'foobar' is an invalid command.\n\n"
			"Standard commands:\n\nMessage Digest commands:\nmd5\nsha256\n");
	}
	else
		printf("usage: ft_ssl command [command opts] [command args]\n");
	return (0);
}
