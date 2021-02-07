/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 18:45:21 by oes-safi          #+#    #+#             */
/*   Updated: 2020/01/13 15:54:49 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	choose(t_data *mlx, int x, int y)
{
	if ((x > 734 && x < 833) && (y > 327 && y < 428))
	{
		init(mlx);
		mlx->fract = 1;
	}
	if ((x > 734 && x < 833) && (y > 438 && y < 538))
	{
		init(mlx);
		mlx->fract = 2;
	}
	if ((x > 952 && x < 1052) && (y > 327 && y < 428))
	{
		init(mlx);
		mlx->fract = 3;
	}
}

void	choose2(t_data *mlx, int x, int y)
{
	if ((x > 952 && x < 1052) && (y > 438 && y < 538))
	{
		init(mlx);
		mlx->fract = 4;
	}
	if ((x > 734 && x < 833) && (y > 548 && y < 648))
	{
		init(mlx);
		mlx->fract = 5;
	}
	if ((x > 952 && x < 1052) && (y > 548 && y < 648))
	{
		init(mlx);
		mlx->fract = 6;
	}
}

int		arg(char **av)
{
	if (ft_strcmp(av[1], "1") || ft_strcmp(av[1], "2") ||\
			ft_strcmp(av[1], "3") || ft_strcmp(av[1], "4") ||\
			ft_strcmp(av[1], "5") || ft_strcmp(av[1], "6"))
		return (1);
	return (0);
}
