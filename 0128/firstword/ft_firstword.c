#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int	len;

	i = 0;
	len = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			len++;
			i++;
		}
		while (--len != 0 && av[1][--i] == ' '  ||	 av[1][--i] == '\t')
		while (--len != 0 && av[1][--i] != ' ' && av[1][--i] != '\t')
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}