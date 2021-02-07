/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:07:38 by oes-safi          #+#    #+#             */
/*   Updated: 2019/12/30 15:13:17 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		color1(int n, t_data *mlx)
{
	int		color;
	int		i;

	mlx->clr[0] = 0x421e0f;
	mlx->clr[1] = 0x421e0f;
	mlx->clr[2] = 0x0e024b;
	mlx->clr[3] = 0x040449;
	mlx->clr[4] = 0x000764;
	mlx->clr[5] = 0x0c2c8a;
	mlx->clr[6] = 0x1852b1;
	mlx->clr[7] = 0x397dd1;
	mlx->clr[8] = 0x87B5E5;
	mlx->clr[9] = 0xF1E9BF;
	mlx->clr[10] = 0xD3ECF8;
	mlx->clr[11] = 0xF8C95F;
	mlx->clr[12] = 0xFFAA00;
	mlx->clr[13] = 0xCC8000;
	mlx->clr[14] = 0x995700;
	mlx->clr[15] = 0x6A3403;
	i = n % 16 + 2;
	color = mlx->clr[i];
	return (color);
}

int		color2(int n, t_data *mlx)
{
	int		r;
	int		g;
	int		b;
	double	t;

	t = (double)n / (double)mlx->max_it;
	r = (int)(9 * (1 - t) * t * t * t * 255);
	g = (int)(15 * (1 - t) * (1 - t) * t * t * 255);
	b = (int)(8.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);
	return (r * 65536 + g * 256 + b);
}

int		color3(int n, t_data *mlx)
{
	int		r;
	int		g;
	int		b;
	double	t;

	t = (double)n / (double)mlx->max_it;
	r = (int)(8 * (1 - t) * t * t * t * 255);
	g = (int)(13 * (1 - t) * (1 - t) * t * t * 255);
	b = (int)(3.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);
	return (b * 65536 + r * 256 + g);
}

int		color4(int n, t_data *mlx)
{
	int		r;
	int		g;
	int		b;
	double	t;

	t = (double)n / (double)mlx->max_it;
	r = (int)(8 * (1 - t) * t * t * t * 255);
	g = (int)(10 * (1 - t) * (1 - t) * t * t * 255);
	b = (int)(5.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);
	return (g * 65536 + b * 256 + r);
}

int		color(int n, t_data *mlx)
{
	if (mlx->cl == 1)
		return (color1(n, mlx));
	if (mlx->cl == 2)
		return (color2(n, mlx));
	if (mlx->cl == 3)
		return (color3(n, mlx));
	if (mlx->cl == 4)
		return (color4(n, mlx));
	return (0);
}
