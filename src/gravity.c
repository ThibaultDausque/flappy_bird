#include "flappy_bird.h"

int	gravity(void *param)
{
	t_bird	*flappy = (t_bird *)param;

	flappy->pos_y += 1;
	put_flappy(flappy->mlx, flappy->mlx_win, flappy);
	printf("%d\n", flappy->pos_y);
	return 0;
}
