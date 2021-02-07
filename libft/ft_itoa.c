/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:27:09 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/09 00:00:38 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static int		len(long c)
{
	int		i;

	i = 1;
	if (c < 0)
	{
		c = c * (-1);
		i++;
	}
	while (c >= 10)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*str;

	nb = (long)n;
	i = len(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (nb == 0)
		str[i - 1] = n + '0';
	else if (nb < 0)
	{
		nb *= (-1);
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[i - 1] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (str);
}
