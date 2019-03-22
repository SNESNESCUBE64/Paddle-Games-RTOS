/*
 * ball.h
 *
 *  Created on: Mar 11, 2019
 *      Author: mssch
 */

#ifndef BALL_H_
#define BALL_H_

//functional prototypes
void updateBall(void);
int getNewXPos(void);
int getNewYPos(void);
int checkCollision(int,int);
int changeDirection(int);

//constants
#define BALL_RADIUS = 3;

//Collision Constants
#define PLAYER_DIED -2
#define NO_COLLISION -1
#define PADDLE_COLLISION 0
#define RIGHT_WALL_COLLISION 1
#define TOP_WALL_COLLISION 2
#define BOTTOM_WALL_COLLISION 3
#define BLOCK_COLLISION 4

//direction constants...
#define DOWN_RIGHT 0
#define UP_RIGHT 1
#define DOWN_LEFT 2
#define UP_LEFT 3

#define BOARD_TOP 19
#define BOARD_BOTTOM 236
#define BOARD_RIGHT 317

#endif /* BALL_H_ */
