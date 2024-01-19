#include "../push_swap.h"

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int	ft_isdigit(int a)
{
	if (a <= 57 && a >= 48)
		return (1);
	return (0);
}

char	*ft_strdup(const char *str)
{
	size_t	a;
	char	*r;

	a = ft_strlen(str);
	r = (char *)malloc(sizeof(char) * (a + 1));
	if (!r)
		return (0);
	ft_strlcpy(r, str, a + 1);
	return (r);
}