//
//  Grid.h
//  GameOfLife
//
//  Created by Alistair on 10/21/14.
//  Copyright 2014 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Grid : CCSprite {
    
}

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void) evolveStep;
-(void) countNeighbors;
-(void) updateCreatures;

@end
