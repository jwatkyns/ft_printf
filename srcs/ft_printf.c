#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_printf	prt;

	ft_bzero(&p, sizeof(p));
	p->fd = 1;
	p->buf = (char*)format;
	va_start(p->a_v, format);
	while (*p->buf && p->len != -1)
	{
		if (*p->buf == %)
		{
		}
	}
	if (p->len > 0)
		write(p->fd, p->buf, p->len);
	va_end(p->a_v);
	return (p->len);
}
