/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeiger <sgeiger@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:07:47 by sgeiger           #+#    #+#             */
/*   Updated: 2024/01/24 22:19:28 by sgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *ptr, ...);
int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_vptr(unsigned long n);
int		ft_print_hexa(unsigned long n, int flag);
char	*ft_hexa(unsigned long n, int flag);
int		ft_print_nbr(int i);
int		ft_print_unsigned(unsigned int u);

#endif
