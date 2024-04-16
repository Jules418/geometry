/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:11:48 by jules             #+#    #+#             */
/*   Updated: 2024/04/15 23:04:47 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHERE_H
# define SPHERE_H

# include "geometry.h"

typedef struct s_sphere
{
	t_vec3	pos;
	float	radius;
}	t_sphere;

t_sphere	create_sphere(t_vec3 pos, float radius);
float		sphere_intersection(t_ray r, t_sphere sp);

#endif