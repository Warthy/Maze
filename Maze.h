#ifndef MAZE_H
#define MAZE_H

extern void initMaze(void);
extern void drawMaze(Coordinates characterPosition);
extern Maze getMaze(void);
extern void changeVisibility(void);
extern void setMazeSize(int height, int width);

#endif