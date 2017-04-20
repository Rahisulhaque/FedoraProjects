#include <unistd.h>

int	main()
{
	char *c;

	c = "9876543210\n";
	write(1, c, 11);
	return (0);
}
