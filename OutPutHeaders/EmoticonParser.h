/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "ImageParser.h"


@interface EmoticonParser : ImageParser {
}
+(id)newInstance;
-(id)stylesForString:(id)string withRange:(NSRange)range withParserPosition:(NSParserPosition*)parserPosition;
-(id)styleStringForContent:(id)content withParserPosition:(NSParserPosition)parserPosition outputLastPosition:(NSParserPosition*)position;
-(id)getStylesForString:(id)string withStyleString:(id)styleString;
-(NSRange)rangeOfObjectInString:(id)string withRange:(NSRange)range;
-(id)getImageForText:(id)text;
-(id)getImage;
@end
