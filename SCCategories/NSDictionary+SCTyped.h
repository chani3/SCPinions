//
//  NSDictionary+SCTyped.h
//
// -- Software License --
//
// Copyright (C) 2013, Steam Clock Software, Ltd.
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// ----------------------

#import <Foundation/Foundation.h>

@interface NSDictionary (SCTyped)

// Grab any object out by class (note: return is untyped, you need to make sure that the type you are assigning to matches)
-(id)objectForKey:(id)key ofType:(Class)type;

// Grab object by type
-(NSString*)stringForKey:(id)key;
-(NSArray*)arrayForKey:(id)key;
-(NSDictionary*)dictionaryForKey:(id)key;
-(NSNumber*)numberForKey:(id)key;

// Grab native types from NSNumber 
-(int)intForKey:(id)key;
-(float)floatForKey:(id)key;
-(BOOL)boolForKey:(id)key;

@end
