/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:24:12 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/05 09:25:27 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_print_c(va_list ap, int *count);
void	ft_print_percent(char c, int *count);
void	ft_print_s(va_list ap, int *count);
void	ft_print_nb(va_list ap, char *base, int *count);
void	ft_print_x(va_list ap, char *base, int *count);
void	ft_print_un(va_list ap, char *base, int *count);
void	ft_print_p(va_list ap, char *base, int *count);
void	ft_putnbr_basep(unsigned long nb, char *base, int *count);
void	ft_putnbr_basex(unsigned int nb, char *base, int *count);

#endif