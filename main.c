/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 11:30:52 by oes-safi          #+#    #+#             */
/*   Updated: 2020/01/06 14:49:17 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	map(int position, int max_wh, double new_min, double new_max)
{
	double range;

	range = new_max - new_min;
	return (new_min + position * (range / max_wh));
}

int		farctal(int x, int y, t_data *mlx, int i)
{
	if (mlx->fract == 1)
		return (mandelbrot(x, y, mlx, i));
	if (mlx->fract == 2)
		return (julia(x, y, mlx, i));
	if (mlx->fract == 3)
		return (tricorn(x, y, mlx, i));
	if (mlx->fract == 4)
		return (burnning_ship(x, y, mlx, i));
	if (mlx->fract == 5)
		return (heartset(x, y, mlx, i));
	if (mlx->fract == 6)
		return (multibrot(y, x, mlx, i));
	return (0);
}

void	init(t_data *mlx)
{
	mlx->win_h = 700;
	mlx->win_w = 700;
	mlx->max_it = 50;
	mlx->re_max = 2;
	mlx->re_min = -2;
	mlx->im_max = 2;
	mlx->im_min = -2;
	mlx->ju_i = 0.2321;
	mlx->ju_r = -0.8;
	mlx->fr = 0;
	mlx->f = 0;
	mlx->cl = 1;
	mlx->zoom = 1;
}

void	print_error(void)
{
	ft_putstr("\nusage: ./fractol [fractal number]\n");
	ft_putstr("\n\033[42m -------- Fractal numbers -------- \033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m|  1 - mandelbrot                 |\033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m|  2 - julia                      |\033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m|  3 - tricorn                    |\033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m|  4 - burnning ship              |\033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m|  5 - heart mandelbrot           |\033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m|  6 - multibrot                  |\033[0m\n");
	ft_putstr("\033[42m|                                 |\033[0m\n");
	ft_putstr("\033[42m --------------------------------- \033[0m\n");
}

int		main(int ac, char **av)
{
	t_data	mlx;
	int		w;
	int		h;

	if (ac == 2 && arg(av))
	{
		init(&mlx);
		mlx.fract = ft_atoi(av[ac - 1]);
		mlx.mlx_ptr = mlx_init();
		mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 1200, mlx.win_h, "test");
		mlx.mlx_img = mlx_new_image(mlx.mlx_ptr, mlx.win_w, mlx.win_h);
		mlx.mlx_img1 = mlx_png_file_to_image(mlx.mlx_ptr, "./ok1.png", &w, &h);
		mlx.data = (int *)mlx_get_data_addr(mlx.mlx_img,
				&mlx.bpp, &mlx.sline, &mlx.endian);
		threading(&mlx);
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.mlx_img, 0, 0);
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.mlx_img1, 700, 0);
		mlx_hook(mlx.win_ptr, 2, 0, key_press, &mlx);
		mlx_hook(mlx.win_ptr, 4, 0, mouse_press, &mlx);
		mlx_hook(mlx.win_ptr, 6, 0, mouse_move, &mlx);
		mlx_loop(mlx.mlx_ptr);
	}
	else
		print_error();
	return (0);
}
