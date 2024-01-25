/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeiger <sgeiger@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:34:02 by sgeiger           #+#    #+#             */
/*   Updated: 2024/01/24 22:20:04 by sgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_vptr(unsigned long n)
{
	char		*str;
	int			count;
	int			w;

	count = ft_print_string("0x");
	if (count == -1)
		return (-1);
	str = ft_hexa(n, 87);
	if (str == NULL)
		return (-1);
	w = count;
	count += ft_print_string(str);
	free(str);
	if (w > count)
		return (-1);
	return (count);
}
