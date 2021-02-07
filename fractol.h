/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:22:58 by oes-safi          #+#    #+#             */
/*   Updated: 2019/12/30 15:26:58 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx/mlx.h"
# include <mlx.h>
# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <pthread.h>
# include <unistd.h>
# include <complex.h>

typedef	struct	s_data
{
	int		clr[16];
	void	*mlx_ptr;
	void	*win_ptr;
	void	*mlx_img;
	void	*mlx_img1;
	int		bpp;
	int		sline;
	int		endian;
	int		*data;
	int		n;
	double	c_r[4];
	double	c_i[4];
	int		max_it;
	int		win_w;
	int		win_h;
	int		mouse_x;
	int		mouse_y;
	double	mouse_re;
	double	mouse_im;
	double	re_max;
	double	re_min;
	double	im_max;
	double	im_min;
	double	ju_i;
	double	ju_r;
	int		f;
	int		fr;
	int		cl;
	int		fract;
	int		zoom;
}				t_data;

int				mandelbrot(int x, int y, t_data *mlx, int i);
int				julia(int x, int y, t_data *mlx, int i);
int				tricorn(int x, int y, t_data *mlx, int i);
int				burnning_ship(int y, int x, t_data *mlx, int i);
int				heartset(int y, int x, t_data *mlx, int i);
int				multibrot(int y, int x, t_data *mlx, int i);
double			ft_map(int a);
void			*thread1(void *mlx1);
void			*thread2(void *mlx1);
void			*thread3(void *mlx1);
void			*thread4(void *mlx1);
void			threading(t_data *mlx);
int				color(int n, t_data *mlx);
int				color1(int n, t_data *mlx);
int				color2(int n, t_data *mlx);
int				color3(int n, t_data *mlx);
int				color4(int n, t_data *mlx);
int				ft_atoi(const char *str);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
int				ft_strcmp(const char *s1, const char *s2);
double			zoom_map(int y, t_data *mlx);
void			apply_zoom(t_data *mlx, double zoomfactor);
double			inter(double start, double end, double pol);
int				mouse_press(int button, int x, int y, t_data *mlx);
int				key_press(int keycode, t_data *mlx);
void			key_hook(int keycode, t_data *mlx);
int				mouse_move(int x, int y, t_data *mlx);
int				farctal(int x, int y, t_data *mlx, int i);
void			init(t_data *mlx);
double			map(int position, int max_wh, double new_min, double new_max);
void			choose(t_data *mlx, int x, int y);
void			choose2(t_data *mlx, int x, int y);
char			*ft_itoa(int n);
int				arg(char **av);

#endif
