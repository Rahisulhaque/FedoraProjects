#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_reverse()
{
	int i;

	i = 57;
	while( i >= 48)
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}


int	main()
{
	char *c = "9876543210\n";

	write(1, c, 11);
	put_reverse();
	return (0);
}
