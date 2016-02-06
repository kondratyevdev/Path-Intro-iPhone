#import <Foundation/Foundation.h>

@interface IntroModel : NSObject

@property (nonatomic, strong) NSString *titleText;
@property (nonatomic, strong) NSString *descriptionText;
@property (nonatomic, strong) UIImage *image;

- (id) initWithTitle:(NSString*)title description:(NSString*)desc image:(NSString*)imageText;

@end
