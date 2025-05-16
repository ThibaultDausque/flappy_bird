#include "flappy_bird.h"

void	put_background(void *mlx, void	*mlx_win)
{
	char	*background;
	t_data	img;

	background = "sprites/xpm/background.xpm";
	img.img = mlx_xpm_file_to_image(mlx, background, &img.img_width, &img.img_height);
	if (!mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0))
		printf("Error\n");
}

void	put_flappy(void *mlx, void *mlx_win, t_bird *bird)
{
	char	*flappy;
	t_data	img;

	flappy = "sprites/xpm/redbird-midflap.xpm";
	img.img = mlx_xpm_file_to_image(mlx, flappy, &img.img_width, &img.img_height);
	if (!mlx_put_image_to_window(mlx, mlx_win, img.img, bird->pos_x, bird->pos_y))
		printf("Error\n");
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_bird	flappy;
	t_data	window;

	window.img_height = 512;
	window.img_width = 288;
	flappy.pos_x = 20;
	flappy.pos_y = window.img_height / 2;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 288, 512, "flappy bird");
	put_background(mlx, mlx_win);
	put_flappy(mlx, mlx_win, &flappy);
	mlx_loop_hook(mlx, gravity, &flappy);
	mlx_loop(mlx);
	return 0;
}
