/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:40:55 by oes-safi          #+#    #+#             */
/*   Updated: 2020/01/03 18:44:52 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	key_hook(int keycode, t_data *mlx)
{
	if (keycode == 83)
		mlx->cl = 1;
	if (keycode == 84)
		mlx->cl = 2;
	if (keycode == 85)
		mlx->cl = 3;
	if (keycode == 86)
		mlx->cl = 4;
	if (keycode == 124)
	{
		mlx->re_max -= (mlx->re_max - mlx->re_min) * 0.05;
		mlx->re_min -= (mlx->re_max - mlx->re_min) * 0.05;
	}
	if (keycode == 123)
	{
		mlx->re_max += (mlx->re_max - mlx->re_min) * 0.05;
		mlx->re_min += (mlx->re_max - mlx->re_min) * 0.05;
	}
	if (keycode == 36)
	{
		if (mlx->fract == 6)
			mlx->fract = 0;
		init(mlx);
		mlx->fract++;
	}
}

int		key_press(int keycode, t_data *mlx)
{
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	if (keycode == 53)
		exit(0);
	if (keycode == 125)
	{
		mlx->im_max -= (mlx->im_max - mlx->im_min) * 0.05;
		mlx->im_min -= (mlx->im_max - mlx->im_min) * 0.05;
	}
	if (keycode == 126)
	{
		mlx->im_max += (mlx->im_max - mlx->im_min) * 0.05;
		mlx->im_min += (mlx->im_max - mlx->im_min) * 0.05;
	}
	if (keycode == 69)
		if (mlx->max_it < 500)
			mlx->max_it += 10;
	if (keycode == 78)
		if (mlx->max_it > 10)
			mlx->max_it -= 10;
	key_hook(keycode, mlx);
	threading(mlx);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->mlx_img, 0, 0);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->mlx_img1, 700, 0);
	return (0);
}

int		mouse_move(int x, int y, t_data *mlx)
{
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	if (mlx->fr == 0)
	{
		mlx->ju_r = map(x, mlx->win_w, mlx->re_min, mlx->re_max);
		mlx->ju_i = map(y, mlx->win_w, mlx->im_min, mlx->im_max);
	}
	threading(mlx);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->mlx_img, 0, 0);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->mlx_img1, 700, 0);
	return (0);
}

int		mouse_press(int button, int x, int y, t_data *mlx)
{
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	if (button == 5)
	{
		mlx->mouse_re = map(x, mlx->win_w, mlx->re_min, mlx->re_max);
		mlx->mouse_im = map(y, mlx->win_w, mlx->im_min, mlx->im_max);
		apply_zoom(mlx, 0.8);
	}
	if (button == 4)
	{
		mlx->mouse_re = map(x, mlx->win_w, mlx->re_min, mlx->re_max);
		mlx->mouse_im = map(y, mlx->win_w, mlx->im_min, mlx->im_max);
		apply_zoom(mlx, 1.2);
	}
	if (button == 1)
	{
		mlx->f++;
		choose(mlx, x, y);
		choose2(mlx, x, y);
	}
	mlx->fr = mlx->f % 2;
	threading(mlx);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->mlx_img, 0, 0);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->mlx_img1, 700, 0);
	return (0);
}
