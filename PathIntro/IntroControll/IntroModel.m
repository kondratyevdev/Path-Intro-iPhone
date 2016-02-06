#import "IntroModel.h"

@implementation IntroModel

@synthesize titleText;
@synthesize descriptionText;
@synthesize image;

- (id) initWithTitle:(NSString*)title description:(NSString*)desc image:(NSString*)imageText {
    self = [super init];
    if(self != nil) {
        titleText = title;
        descriptionText = desc;
        image = [UIImage imageNamed:imageText];
    }
    return self;
}

@end
