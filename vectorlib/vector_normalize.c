/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_normalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:37:41 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:37:42 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_normalize(t_vector v)
{
	double	len;

	len = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	if (len != 0 && len != 1)
	{
		v.x /= len;
		v.y /= len;
		v.z /= len;
	}
	return (v);
}
