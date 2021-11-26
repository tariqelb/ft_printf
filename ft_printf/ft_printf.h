/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:43:13 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/24 18:36:08 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_put_unsignedint(unsigned int nbr);
int	ft_putint(int nbr);
int	ft_puthex(unsigned int nbr, int flag);
int	ft_putstr(char *str);
int	ft_putchar(char c);

#endif
