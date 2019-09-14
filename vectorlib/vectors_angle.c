/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_angle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeeney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:38:55 by efeeney           #+#    #+#             */
/*   Updated: 2019/09/14 13:38:57 by efeeney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

double	vectors_angle(t_vector a, t_vector b)
{
	t_vector	v1;
	t_vector	v2;

	v1 = vector_normalize(a);
	v2 = vector_normalize(b);
	return (acos(dot_product(v1, v2)));
}
