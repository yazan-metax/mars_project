# include "rovers.h"
// this is the function that i use to process the instructions and the coordinates giving to the rover
void	processInstructions(int x, int y, Rover *rovers, char *instructions,int i)
{
	while (*instructions)
	{
		char command;
		command = *instructions;
		switch (command)
		{
		case 'L':
			switch (rovers->orientation)
			{
			case 'N':
				rovers->orientation = 'W';
				break ;
			case 'W':
				rovers->orientation = 'S';
				break ;
			case 'S':
				rovers->orientation = 'E';
				break ;
			case 'E':
				rovers->orientation = 'N';
				break ;
			}
			break ;
		case 'R':
			switch (rovers->orientation)
			{
			case 'N':
				rovers->orientation = 'E';
				break ;
			case 'E':
				rovers->orientation = 'S';
				break ;
			case 'S':
				rovers->orientation = 'W';
				break ;
			case 'W':
				rovers->orientation = 'N';
				break ;
			}
			break ;
		case 'M':
			switch (rovers->orientation)
			{
			case 'N':
				if (rovers->y < y)
				{
					rovers->y++;
				}else
				{
					printf("error: rover number (%d) is trying to move out of the plateau border in the north\n",i);
				}
				break ;
			case 'E':
				if (rovers->x < x)
				{
					rovers->x++;
				}else
				{
					printf("error: rover number (%d) is trying to move out of the plateau border in the east\n",i);
				}
				break ;
			case 'S':
				if (rovers->y > 0)
				{
					rovers->y--;
				}else
				{
					printf("error: rover number (%d) is trying to move out of the plateau border in the sougth\n",i);
				}
				break ;
			case 'W':
				if (rovers->x > 0)
				{
					rovers->x--;
				}else
				{
					printf("error: rover number (%d) is trying to move out of the plateau border in the west\n",i);
				}
				break ;
			}
			break ;
		}
		instructions++;
	}
}
// i use this function to convert a string of characters form low case to an upper case
void convert_to_uppercase(char *inst) {

    while (*inst) {
        if (*inst >= 'a' && *inst <= 'z') {
            *inst -= 32;
        }
        inst++;
    }
}

// i use it to convert a single character from low case to an upper one
int	convert_to_uppercase_char(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
