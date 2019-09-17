#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);

typedef	struct	s_printf
{
	char	*buf;
	size_t	len;
	int	fd;
	va_list	a_v;
}		t_printf;

#endif
