//
//  vector2.h
//  RocketGame
//
//  Created by Vaibhav Malhotra on 12/9/17.
//  Copyright © 2017 Vaibhav Malhotra. All rights reserved.
//

#ifndef VECTOR2_H
#define VECTOR2_H

#include <GL/glfw.h>

typedef struct {
	GLfloat x;	
	GLfloat y;
	
} Vector2;

Vector2 makeVector2(GLfloat x, GLfloat y);
Vector2 addVector2(Vector2 first, Vector2 second);

#endif
