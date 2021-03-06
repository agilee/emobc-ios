// Copyright (c) 2010 Hyperbolic Magnetism
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <OpenGLES/ES1/gl.h>

typedef struct {
	GLfloat x0, y0, x1, y1,	x2, y2,	x3, y3;
} TransitionTexCoords;

@interface HMGLTransition : NSObject {

	TransitionTexCoords basicTexCoords;	
}

@property (nonatomic, assign) TransitionTexCoords basicTexCoords;

// Subclass this class and implement this three methods to create your own transition
- (void)initTransition;
- (void)drawWithBeginTexture:(GLuint)beginTexture endTexture:(GLuint)endTexture;
- (BOOL)calc:(NSTimeInterval)frameTime; // Must return YES when the transition is over

@end