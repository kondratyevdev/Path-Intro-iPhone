#import <UIKit/UIKit.h>
#import "IntroView.h"

@interface IntroControll : UIView<UIScrollViewDelegate> {
    UIImageView *backgroundImage1;
    UIImageView *backgroundImage2;
    
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    NSArray *pages;
    
    NSTimer *timer;
    
    int currentPhotoNum;
    
    BOOL islandscape;
}

- (id)initWithFrame:(CGRect)frame pages:(NSArray*)pages;
- (void) updateView:(CGRect)frame;


@end
