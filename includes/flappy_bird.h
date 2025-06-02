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
	void	*mlx;
	void	*mlx_win;
	int		pos_x;
	int		pos_y;
}	t_bird;

//////gravity//////
int	gravity(void *param);

//--- main ---
void	put_flappy(void *mlx, void *mlx_win, t_bird *bird);

#endif
