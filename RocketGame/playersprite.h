//
//  playersprite.h
//  RocketGame
//
//  Created by Vaibhav Malhotra on 12/7/17.
//  Copyright © 2017 Vaibhav Malhotra. All rights reserved.
//

#ifndef PLAYERSPRITE_H
#define PLAYERSPRITE_H

#include <iostream>
#include <GL/glew.h>
#include <GL/glfw.h>
#include "vector2.h"
#include "boudingbox.h"
#include <vector>
#include <stdlib.h>
#include "sprite.h"

class PlayerSprite: public Sprite
{
	private:
		BoundingBox _boundingBox;
		
	public:
		PlayerSprite(GLuint textureBufferID, Vector2 position);
		void update();
		void setBoundingBox(BoundingBox boundingBox);
		
};

#endif
