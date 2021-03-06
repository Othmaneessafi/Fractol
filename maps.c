/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:13:57 by oes-safi          #+#    #+#             */
/*   Updated: 2020/01/03 18:43:55 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mandelbrot(int y, int x, t_data *mlx, int i)
{
	int		n;
	double	tmp;
	double	z_r;
	double	z_i;

	z_r = 0;
	z_i = 0;
	n = 0;
	mlx->c_r[i] = map(x, mlx->win_w, mlx->re_min, mlx->re_max);
	mlx->c_i[i] = map(y, mlx->win_w, mlx->im_min, mlx->im_max);
	while (n < mlx->max_it && z_r * z_r + z_i * z_i < 4)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + mlx->c_r[i];
		z_i = 2 * z_i * tmp + mlx->c_i[i];
		n++;
	}
	return (n);
}

int		julia(int y, int x, t_data *mlx, int i)
{
	int		n;
	double	tmp;
	double	z_r;
	double	z_i;

	i = 0;
	n = 0;
	z_r = map(x, mlx->win_w, mlx->re_min, mlx->re_max);
	z_i = map(y, mlx->win_w, mlx->im_min, mlx->im_max);
	while (n < mlx->max_it && z_r * z_r + z_i * z_i < 4)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + mlx->ju_r;
		z_i = 2 * z_i * tmp + mlx->ju_i;
		n++;
	}
	return (n);
}

int		tricorn(int y, int x, t_data *mlx, int i)
{
	int		n;
	double	tmp;
	double	z_r;
	double	z_i;

	z_r = 0;
	z_i = 0;
	n = 0;
	mlx->c_r[i] = map(x, mlx->win_w, mlx->re_min, mlx->re_max);
	mlx->c_i[i] = map(y, mlx->win_w, mlx->im_min, mlx->im_max);
	while (n < mlx->max_it && z_r * z_r + z_i * z_i < 4)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + mlx->c_r[i];
		z_i = -2 * z_i * tmp + mlx->c_i[i];
		n++;
	}
	return (n);
}
