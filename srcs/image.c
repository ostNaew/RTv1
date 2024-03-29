/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:43:47 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:43:51 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv.h"

void	set_pixel(SDL_Surface *surface, int x, int y, unsigned int pixel)
{
	*((unsigned int *)(surface->pixels + y * surface->pitch + x * 4)) = pixel;
}

void	clear_surface(SDL_Surface *surface)
{
	ft_bzero(surface->pixels, surface->h * surface->w * 4);
}

int		ft_lepri(int first, int second, double percent)
{
	if (first == second)
		return (first);
	return ((int)((double)first + (second - first) * percent));
}

int		get_color(int start, int end, double percent)
{
	int		r;
	int		g;
	int		b;

	if (start == end)
		return (start);
	r = ft_lepri((start >> 16) & 0xFF, (end >> 16) & 0xFF, percent);
	g = ft_lepri((start >> 8) & 0xFF, (end >> 8) & 0xFF, percent);
	b = ft_lepri((start) & 0xFF, (end) & 0xFF, percent);
	return (r << 16 | g << 8 | b);
}
