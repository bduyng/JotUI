//
//  JotGLPointProgram.h
//  JotUI
//
//  Created by Adam Wulf on 1/5/16.
//  Copyright © 2016 Adonit. All rights reserved.
//

#import <JotUI/JotUI.h>
#import "JotGLProgram.h"

@interface JotGLPointProgram : JotGLProgram

- (id)initWithVertexShaderFilename:(NSString *)vShaderFilename
            fragmentShaderFilename:(NSString *)fShaderFilename
                    withAttributes:(NSArray<NSString*>*)attributes
                       andUniforms:(NSArray<NSString*>*)uniforms;

-(GLuint) attributeVertexIndex;

-(GLuint) attributePointSizeIndex;

-(GLuint) uniformTextureIndex;

-(GLuint) uniformMVPIndex;

@end
