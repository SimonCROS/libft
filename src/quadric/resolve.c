/**
 * @author Lucille Burnet (lburnet@student.42lyon.fr),
 * Simon Cros (scros@student.42lyon.fr)
 */

#include <math.h>

#include "libft.h"

/*
Aqt2 + Bqt + Cq = 0 with

Aq = Axd2 + Byd2 + Czd2 + Dxdyd + Exdzd + Fydzd

Bq = 2*Axoxd + 2*Byoyd + 2*Czozd + D(xoyd + yoxd) + E(xozd + zoxd) + F(yozd + ydzo) + Gxd + Hyd + Izd

Cq = Axo2 + Byo2 + Czo2 + Dxoyo + Exozo + Fyozo + Gxo + Hyo + Izo + J

http://skuld.bmsc.washington.edu/people/merritt/graphics/quadrics.html
*/

//give coeff a,b,c from at^2+bt+c=0
static t_vector3	inter_quad_line_coeff(t_quadric *quad, t_vector3 c,
	t_vector3 r)
{
	t_vector3	abc;

	abc.x = quad->a * 
	return (abc);
}

#include <stdio.h>

static float	discriminant(t_vector3 abc)
{
	float	delta;

	if (abc.x == 0)
		return (0);
	delta = pow(abc.y, 2) - 4 * abc.x * abc.z;
	return (delta);
}

//give smaller and positive solution if possible of ax^2+bx+c=0
//need to verify the result is pos
static float	inter_quad_line_sol(t_vector3 abc, float d)
{
	float	t1;
	float	t2;

	if (abc.x == 0 && abc.y != 0)
		return (-abc.z / abc.y);
	if (d == 0)
		return (-abc.y * 0.5 / abc.x);
	t1 = (-abc.y - sqrtf(d)) * 0.5 / abc.x;
	t2 = (-abc.y + sqrtf(d)) * 0.5 / abc.x;
	if (t1 > 0 && t2 > 0)
		return (fminf(t1, t2));
	return (fmaxf(t1, t2));
}

float	resolve_quad(t_quadric *quad, t_vector3 c, t_vector3 r)
{
	t_vector3	abc;
	float		d;

	abc = inter_quad_line_coeff(quad, c, r);
	d = discriminant(abc);
	if (d < 0)
		return (0);
	return (inter_quad_line_sol(abc, d));
}
