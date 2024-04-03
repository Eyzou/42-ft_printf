/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:28:21 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/05 09:25:48 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_base(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j])
		{	
			if (str[i] == '-' || str[i] == '+')
				return (0);
			if (str[i] == str[j])
				count++;
			j++;
		}
		if (count > 1)
			return (0);
		count = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	int		len;
	long	n;

	n = nbr;
	len = ft_strlen(base);
	if (check_base(base) == 0)
		return ;
	if (n < 0)
	{
		n = -n ;
		ft_putchar_fd('-', 1);
	}
	if (n >= len)
	{
		ft_putnbr_base(n / len, base, count);
		ft_putnbr_base(n % len, base, count);
	}
	else
	{
		ft_putchar_fd(base[n], 1);
	}
}

/*int main(void)
{
	int	nb = 58;
	char	base[] = "0123456789abcdfe";
	ft_putnbr_base(nb,base);
}*/
