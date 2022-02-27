#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
//#include "get_next_line_bonus.h"

int			main(int ac, char **av)
{
	char	*line;
	int		fd1;
//	int		fd2;
	int		ret;

	(void)ac;
	fd1 = open(av[1], O_RDONLY);
	//fd2 = open(av[2], O_RDONLY);
	
	while ((ret = get_next_line(fd1, &line)) > 0)
	{
		printf("[%i] %s\n", ret, line);
		free(line);
		/*if ((ret = get_next_line(fd2, &line)) > 0)
		{
			printf("[%i] %s\n", ret, line);
			free(line);
		}*/
	}
	printf("[%i] %s\n", ret, line);

	return (0);
}
