#ifndef FLAPPY_BIRD
# define FLAPPY_BIRD

# include <stdio.h>
# include "mlx.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		img_height;
	int		img_width;
}	t_data;

typedef struct s_bird
{
	int		pos_x;
	int		pos_y;
}	t_bird;

//////gravity//////
int	gravity(t_bird *flappy);

#endif
