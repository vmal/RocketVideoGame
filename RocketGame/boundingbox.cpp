//
//  boundingbox.cpp
//  RocketGame
//
//  Created by Vaibhav Malhotra on 12/8/17.
//  Copyright © 2017 Vaibhav Malhotra. All rights reserved.
//

#include "boudingbox.h"

BoundingBox	makeBoundingBox(int top, int bottom, int left, int right)
{
	BoundingBox boundingBox;
	boundingBox.top = top;
	boundingBox.bottom = bottom;
	boundingBox.left = left;
	boundingBox.right = right;
	return boundingBox;
}
