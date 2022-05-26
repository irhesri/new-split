#include "header.h"

//	BRANCHLESS
int	min(int a, int b)
{
	return (a * (a <= b) + b * (a > b));
}

int	max(int a, int b)
{
	return (a * (a >= b) + b * (a < b));
}

int	absolute_value(int a)
{
	return (a * (a >= 0) + (a * -1) * (a < 0));
}

//	WITH NO COMPARISON OPERATORS
//	POSITIVE NUMBERS
int	_min(int a, int b)
{
	int	min;

	min = 0;
	while (a && b)
	{
		a--;
		b--;
		min++;
	}
	return (min);
}

int	_max(int a, int b)
{
	int	max;

	max = 0;
	while (a || b)
	{
		a--;
		b--;
		max++;
	}
	return (max);
}

int	_absolute_value(int a)
{
	long long	b;
	long long	c;
	int		abs;

	b = a;
	c = a;
	abs = 0;
	while (c && b)
	{
		c--;
		b++;
		abs++;
	}
	return (abs);
}
