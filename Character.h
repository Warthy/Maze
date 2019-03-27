#ifndef CHARACTER_H
#define CHARACTER_H

extern void initCharacterPosition(Coordinates);
extern void drawCharacter();
extern void moveCharacter(int, Maze);
extern void setCharacterSize(int userSize);
extern Coordinates getCharacterPosition();

#endif