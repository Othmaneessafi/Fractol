/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:06:43 by oes-safi          #+#    #+#             */
/*   Updated: 2019/12/30 15:06:56 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	inter(double start, double end, double pol)
{
	return (start + ((end - start) * pol));
}

void	apply_zoom(t_data *mlx, double zoomfactor)
{
	double interpolation;

	interpolation = 1.0 / zoomfactor;
	mlx->re_min = inter(mlx->mouse_re, mlx->re_min, interpolation);
	mlx->im_min = inter(mlx->mouse_im, mlx->im_min, interpolation);
	mlx->re_max = inter(mlx->mouse_re, mlx->re_max, interpolation);
	mlx->im_max = inter(mlx->mouse_im, mlx->im_max, interpolation);
}
