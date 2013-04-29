#import <UIKit/UIKit.h>
#import "IntroView.h"

@interface IntroControll : UIView<UIScrollViewDelegate> {
    UIImageView *backgroundImage1;
    UIImageView *backgroundImage2;
    UIImageView *backgroundImage3;
    
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    NSArray *pages;
    
    NSTimer *timer;
    
    int currentPhotoNum;
}

- (id)initWithFrame:(CGRect)frame pages:(NSArray*)pages;


@end
