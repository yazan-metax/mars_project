#ifndef ROVERS_H
# define ROVERS_H
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct ROVER
{
	int		x;
	int		y;
	char	orientation;
}			Rover;

int			check_input(int i, int num, Rover *rovers);
int			convert_to_uppercase_char(int c);
void		convert_to_uppercase(char *inst);
void		processInstructions(int x, int y, Rover *rovers, char *instructions,
				int i);

#endif