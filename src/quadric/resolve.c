/**
 * @author Lucille Burnet (lburnet@student.42lyon.fr),
 * Simon Cros (scros@student.42lyon.fr)
 */

#include <math.h>

#include "libft.h"

/*
http://skuld.bmsc.washington.edu/people/merritt/graphics/quadrics.html
*/
static t_vector3	inter_quad_line_coeff(t_quadric *q, t_vector3 o,
	t_vector3 d)
{
	t_vector3	abc;

	abc.x
		= q->a * powf(d.x, 2)
		+ q->b * powf(d.y, 2)
		+ q->c * powf(d.z, 2)
		+ q->d * d.x * d.y
		+ q->e * d.x * d.z
		+ q->f * d.y * d.z;
	abc.y
		= 2 * q->a * o.x * d.x
		+ 2 * q->b * o.y * d.y
		+ 2 * q->c * o.z * d.z
		+ q->d * (o.x * d.y + o.y * d.x)
		+ q->e * (o.x * d.z + o.z * d.x)
		+ q->f * (o.y * d.z + o.z * d.y)
		+ q->g * d.x
		+ q->h * d.y
		+ q->i * d.z;
	abc.z
		= q->a * powf(o.x, 2)
		+ q->b * powf(o.y, 2)
		+ q->c * powf(o.z, 2)
		+ q->d * o.x * o.y
		+ q->e * o.x * o.z
		+ q->f * o.y * o.z
		+ q->g * o.x
		+ q->h * o.y
		+ q->i * o.z
		+ q->j;
	return (abc);
}

static float	discriminant(t_vector3 abc)
{
	float	delta;

	if (abc.x == 0)
		return (0);
	delta = powf(abc.y, 2) - 4 * abc.x * abc.z;
	return (delta);
}

/*
t0 = (-Bq - ((Bq^2 - 4AqCq))^0.5) / 2Aq
t1 = (-Bq + ((Bq^2 - 4AqCq))^0.5) / 2Aq
*/
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

float	resolve_quad(t_quadric *quad, t_vector3 o, t_vector3 dir)
{
	t_vector3	abc;
	float		d;
	float		t;

	abc = inter_quad_line_coeff(quad, o, dir);
	d = discriminant(abc);
	t = inter_quad_line_sol(abc, d);
	return (fmaxf(t, 0));
}

/*
Rn = [xn yn zn] = [dF/dx dF/dy dF/dz]

which gives
xn = 2*A*xi + D*yi + E*zi + G
yn = 2*B*yi + D*xi + F*zi + H
zn = 2*C*zi + E*xi + F*yi + I

Rn must be normalized and also we have to find the normal for surface facing the ray.
If R *Rd > 0 then reverse Rn.
*/
t_vector3	resolve_quad_norm(t_quadric *quad, t_vector3 phit)
{
	t_vector3	norm;

	norm.x = 2 * quad->a * phit.x + quad->d * phit.y + quad->e * phit.z + quad->g;
	norm.y = 2 * quad->b * phit.y + quad->d * phit.x + quad->f * phit.z + quad->h;
	norm.z = 2 * quad->c * phit.z + quad->e * phit.x + quad->f * phit.y + quad->i;
	return (vec3_normalize(norm));
}
