/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 14:27:40 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 14:27:44 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "myft.h"

int	main(int argc, char **argv)
{
	char	buffer[1];
	int		nbchar;
	int		fd;

	nbchar = 1;
	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (fd == -1)
		return (write(2, "open() error.\n", 14) || 1);
	while (read(fd, buffer, nbchar))
		write(1, &buffer, 1);
	if (close(fd) == -1)
		return (write(2, "close() failed.\n", 16) || 1);
	return (0);
}
