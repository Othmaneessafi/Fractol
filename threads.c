/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 23:57:15 by oes-safi          #+#    #+#             */
/*   Updated: 2020/01/03 18:50:37 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	*thread1(void *mlx1)
{
	t_data	*mlx;
	int		n;
	int		x;
	int		y;

	mlx = (t_data *)mlx1;
	n = 0;
	x = 0;
	while (x < mlx->win_h / 2)
	{
		y = 0;
		while (y < mlx->win_w / 2)
		{
			n = farctal(x, y, mlx, 0);
			if (n == mlx->max_it)
				mlx->data[x * mlx->win_w + y] = 0;
			else
				mlx->data[x * mlx->win_w + y] = color(n, mlx);
			y++;
		}
		x++;
	}
	pthread_exit(NULL);
}

void	*thread2(void *mlx1)
{
	t_data	*mlx;
	int		n;
	int		x;
	int		y;

	mlx = (t_data *)mlx1;
	n = 0;
	x = mlx->win_h / 2;
	while (x < mlx->win_h)
	{
		y = 0;
		while (y < mlx->win_w / 2)
		{
			n = farctal(x, y, mlx, 1);
			if (n == mlx->max_it)
				mlx->data[x * mlx->win_w + y] = 0;
			else
				mlx->data[x * mlx->win_w + y] = color(n, mlx);
			y++;
		}
		x++;
	}
	pthread_exit(NULL);
}

void	*thread3(void *mlx1)
{
	t_data	*mlx;
	int		n;
	int		x;
	int		y;

	mlx = (t_data *)mlx1;
	n = 0;
	x = 0;
	while (x < mlx->win_h / 2)
	{
		y = mlx->win_w / 2;
		while (y < mlx->win_w)
		{
			n = farctal(x, y, mlx, 2);
			if (n == mlx->max_it)
				mlx->data[x * mlx->win_w + y] = 0;
			else
				mlx->data[x * mlx->win_w + y] = color(n, mlx);
			y++;
		}
		x++;
	}
	pthread_exit(NULL);
}

void	*thread4(void *mlx1)
{
	t_data	*mlx;
	int		n;
	int		x;
	int		y;

	mlx = (t_data *)mlx1;
	n = 0;
	x = mlx->win_h / 2;
	while (x < mlx->win_h)
	{
		y = mlx->win_w / 2;
		while (y < mlx->win_w)
		{
			n = farctal(x, y, mlx, 3);
			if (n == mlx->max_it)
				mlx->data[x * mlx->win_w + y] = 0;
			else
				mlx->data[x * mlx->win_w + y] = color(n, mlx);
			y++;
		}
		x++;
	}
	pthread_exit(NULL);
}

void	threading(t_data *mlx)
{
	pthread_t newthread[4];

	pthread_create(&newthread[0], NULL, thread1, (void *)mlx);
	pthread_create(&newthread[1], NULL, thread2, (void *)mlx);
	pthread_create(&newthread[2], NULL, thread3, (void *)mlx);
	pthread_create(&newthread[3], NULL, thread4, (void *)mlx);
	pthread_join(newthread[0], NULL);
	pthread_join(newthread[1], NULL);
	pthread_join(newthread[2], NULL);
	pthread_join(newthread[3], NULL);
}
