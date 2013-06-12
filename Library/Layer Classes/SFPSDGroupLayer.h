//
//  SFPSDGroupLayer.h
//  SFPSDWriter
//
//  Created by Konstantin Erokhin on 06/06/13.
//  Copyright (c) 2013 Shiny Frog. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SFPSDLayer.h"

@interface SFPSDGroupLayer : SFPSDLayer

/* If the group layer is shown opened or closed. Default is NO
 */
@property (nonatomic, assign) BOOL isOpened;

/* Copies the Group layer information from another Group layer
 * Useful if you want to setup the information while opening the Group and forget it while closing
 * it and magically have the information back
 */

// TODO: fix the comment
-(void)copyGroupInformationFrom:(SFPSDGroupLayer *)layer;

@end