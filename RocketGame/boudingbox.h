//
//  boundingbox.cpp
//  RocketGame
//
//  Created by Vaibhav Malhotra on 12/8/17.
//  Copyright © 2017 Vaibhav Malhotra. All rights reserved.
//

#ifndef BOUDINGBOX_H
#define BOUDINGBOX_H

typedef struct {
	int top;
	int bottom;
	int left;
	int right;
} BoundingBox;

BoundingBox	makeBoundingBox(int top, int bottom, int left, int right); 

#endif
