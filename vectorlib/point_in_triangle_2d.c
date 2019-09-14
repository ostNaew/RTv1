/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_in_triangle_2d.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:33:22 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:33:23 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		point_in_triangle_2d(t_triangle triangle, t_vector point)
{
	double	a;
	double	b;
	double	c;

	a = (triangle.a.x - point.x) * (triangle.b.y - triangle.a.y) -
		(triangle.b.x - triangle.a.x) * (triangle.a.y - point.y);
	b = (triangle.b.x - point.x) * (triangle.c.y - triangle.b.y) -
		(triangle.c.x - triangle.b.x) * (triangle.b.y - point.y);
	c = (triangle.c.x - point.x) * (triangle.a.y - triangle.c.y) -
		(triangle.a.x - triangle.c.x) * (triangle.c.y - point.y);
	if ((a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0))
		return (1);
	return (0);
}
