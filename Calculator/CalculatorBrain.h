//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Linda Cao on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)perforOperation:(NSString*)operation;


// test
@end
