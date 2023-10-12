# mars_project

## this project is a fun simple project that can be recommended for any one who would like to practice their c skills or improve themselves in c language.
### project details ✨

A squad of robotic rovers are to be landed by NASA on a plateau on Mars. This plateau, which is curiously rectangular, must be navigated by the rovers so that their on-board cameras can get a complete view of the surrounding terrain to send back to Earth. A rover's position and location is represented by a combination of x and y co- ordinates and a letter representing one of the four cardinal compass points. The plateau is divided up into a grid to simplify navigation.An example position might be 0, 0, N, which means the rover is in the bottom left corner and facing North.In order to control a rover, NASA sends a simple string of letters.The possible letters are 'L', 'R' and 'M'.
'L' and 'R' makes the rover spin 90 degrees left or right respectively, without moving from its current spot.
'M' means move forward one grid point, and maintain the same Heading.Assume that the square directly North from (x, y) is (x, y+1).
Input:
The first line of input is the upper-right coordinates of the plateau, the lower- left coordinates are assumed to be 0,0. The rest of the input is information pertaining to the rovers that have been deployed. Each rover has two lines of input. The first line gives the rover's position, and the second line is a series of instructions telling the rover how to explore the plateau. The position is made up of two integers and a letter separated by spaces, corresponding to the x and y co-ordinates and the rover's orientation. Each rover will be finished sequentially, which means that the second rover won't start to move until the first one has finished moving.
### note: Please apply design pattern,solid and clean code principles.
- Output:
- The output for each rover should be its final co-ordinates and heading.
- Input & Output:
- Test Input:
- 5 5
- 1 2 N
- L M L M L M L M M
- 3 3 E
- M M R M M R M R R M

- Expected Output:
- 1 3 N
- 5 1 E
# keynotes✏️ to help understand this project.
- ### problem Description:
NASA is deploying robotic rovers on a rectangular plateau on Mars.
Rovers need to be navigated using a series of instructions to capture the surrounding terrain.
The plateau is represented as a grid, and each rover has a position and heading.
- ### Coordinate System:
- The plateau is defined by upper-right coordinates. Lower-left coordinates are assumed to be (0,0).
- A rover's position is represented by (x, y) coordinates and a cardinal compass point (N, S, E, W).
- ### Control Instructions:
- Three types of instructions: 'L' (turn left), 'R' (turn right), 'M' (move forward).
- ### Input Format:
- First line: Upper-right coordinates of the plateau.
- Subsequent lines: Rover information in two lines - position and instruction set.
- ### Sequential Execution:
- Rovers are processed one after the other. The second rover starts after the first one finishes.
- ### Output Format:
- Final coordinates and heading of each rover after executing instructions.
# the file structure for this project will be as following:
### .c files 
- where all our c functions will be written in.
### .h (header file)
- the header file is important to provide access to various functions from any file that the header is included in,that means we will not over write the function that we want to use in every file that doesn't include that specific function.
- we can include all the headers that we will be using in our program in the .h file instead of including them in every file that our program has.

# project files

- [`rovers.c`](rovers.c) - in this file i have my main function, It serves as the entry point for the program, meaning it's the first function that gets executed when the program starts running. Every C program must have a `main` function.

- [`rovers_utils.c`](rovers_utils.c) - in this file i added all the halper functions are needed by the main function in the `rovers.c` file.
- [`rovers.h`](rovers.h) - this file has all the headers and the typedef structure that are necessary for the program to work.

## note📝 :
- in case the orientation and the instructions are given to the rover are lowcase letters, i added 2 functions in [`rovers_utils.c`](rovers_utils.c) file, that help to covert them into uppercase letter before calling the `processInstructions()` function to process them.




