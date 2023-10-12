#include "rovers.h"

int	main(void)
{
	int		roversnum;
	char	instructions[500];
	int		i;

	int plateauX, plateauY;
	i = 0;
	Rover *rovers; // Declare a pointer to Rover
	printf("Enter the plateau coordinates (x y)\n");
	if (scanf("%d %d", &plateauX, &plateauY) != 2)
	{
		printf("Invalid input for plateau coordinates\n");
		return (1); // Return an error code
	}
	while (getchar() != '\n');

	printf("Enter the number of rovers to send to Mars\n");
	if (scanf("%d", &roversnum) != 1)
	{
		printf("Invalid input for number of rovers\n");
		return (1);
	}
	while (getchar() != '\n');
	// Allocate memory for the array of rovers based on the number of rovers sent to mars
	rovers = (Rover *)malloc(sizeof(Rover) * roversnum);
	if (!rovers)
	{
		printf("memory allocation failed\n");
		return (1);
	}
	while (i < roversnum)
	{
		printf("Enter rover %d's x, y, and orientation\n", i + 1);
		if (scanf("%d %d %c", &rovers[i].x, &rovers[i].y,
				&rovers[i].orientation) != 3)
		{
			printf("Invalid input for rover details\n");
			free(rovers);// Free allocated memory before exiting
			return (1);// Return an error code
		}
		while (getchar() != '\n');

		printf("Enter the instructions for rover %d\n", i + 1);
		if (fgets(instructions,sizeof(instructions),stdin) == NULL)
		{
			printf("Error reading instructions\n");
			free(rovers);// Free allocated memory before exiting
			return (1);
		}
		rovers[i].orientation = convert_to_uppercase_char(rovers[i].orientation);
		convert_to_uppercase(instructions);
		processInstructions(plateauX, plateauY, &rovers[i], instructions, i
				+ 1);
		printf("----------------------------------------------\n");
		printf("FINAL POSITION FOR ROVER %d: (%d %d %c)\n", i + 1, rovers[i].x,
				rovers[i].y, rovers[i].orientation);
		printf("----------------------------------------------\n");
		i++;
	}
	free(rovers); // Free allocated memory before exiting
	return (0);
}
