/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeiger <sgeiger@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:46:43 by sgeiger           #+#    #+#             */
/*   Updated: 2024/01/24 22:27:46 by sgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char format)
{
	int		print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_print_char(va_arg(args, int));
	else if (format == 's')
		print_len += ft_print_string(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_print_vptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		print_len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		print_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		print_len += ft_print_hexa(va_arg(args, unsigned int), 87);
	else if (format == 'X')
		print_len += ft_print_hexa(va_arg(args, unsigned int), 55);
	else if (format == '%')
		print_len += ft_print_char('%');
	if (print_len < 0)
		return (-1);
	return (print_len);
}

int	ft_printf(const char *ptr, ...)
{
	int		count;
	int		print_len;
	int		w;
	va_list	vlist;

	count = 0;
	print_len = 0;
	va_start(vlist, ptr);
	while (ptr[count] != '\0')
	{
		w = print_len;
		if (ptr[count] == '%')
		{
			count++;
			print_len += ft_format(vlist, ptr[count]);
		}
		else
			print_len += ft_print_char(ptr[count]);
		if (w > print_len)
			return (-1);
		count++;
	}
	va_end(vlist);
	return (print_len);
}
