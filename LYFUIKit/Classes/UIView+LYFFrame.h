//
//  UIView+LYFFrame.h
//  LYFUIKit_Example
//
//  Created by liyufa on 2021/8/12.
//  Copyright © 2021 1115714135@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (LYFFrame)

/** View's X Position */
@property (nonatomic, assign) CGFloat   x;

/** View's Y Position */
@property (nonatomic, assign) CGFloat   y;

/** View's width */
@property (nonatomic, assign) CGFloat   width;

/** View's height */
@property (nonatomic, assign) CGFloat   height;

/** View's origin - Sets X and Y Positions */
@property (nonatomic, assign) CGPoint   origin;

/** View's size - Sets Width and Height */
@property (nonatomic, assign) CGSize    size;

/** Y value representing the bottom of the view **/
@property (nonatomic, assign) CGFloat   bottom;

/** X Value representing the right side of the view **/
@property (nonatomic, assign) CGFloat   right;

/** X Value representing the top of the view (alias of x) **/
@property (nonatomic, assign) CGFloat   left;

/** Y Value representing the top of the view (alias of y) **/
@property (nonatomic, assign) CGFloat   top;

/** X value of the object's center **/
@property (nonatomic, assign) CGFloat   centerX;

/** Y value of the object's center **/
@property (nonatomic, assign) CGFloat   centerY;

/** View's bounds X value **/
@property (nonatomic, assign) CGFloat   boundsX;

/** View's bounds Y value **/
@property (nonatomic, assign) CGFloat   boundsY;

/** View's bounds width **/
@property (nonatomic, assign) CGFloat   boundsWidth;

/** View's bounds height **/
@property (nonatomic, assign) CGFloat   boundsHeight;

/** Returns the Subview with the heighest X value **/
@property (nonatomic, strong, readonly) UIView *lastSubviewOnX;

/** Returns the Subview with the heighest Y value **/
@property (nonatomic, strong, readonly) UIView *lastSubviewOnY;

@property (nonatomic, assign, readonly) CGFloat lastSubviewBottom;


/// Centers the view to its parent view (if exists)
- (void)centerToParent;

///控件左边(x)与屏幕中心向右偏移
- (void)setCenterToLeftPad:(CGFloat)centerToLeftPad;

///控件右边(x+width)与屏幕中心向左偏移
- (void)setCenterToRightPad:(CGFloat)centerToRightPad;

///与父view右对齐
- (void)alignmentRightToSuperview;

///与父view左对齐
- (void)alignmentLeftToSuperview;

///距父view右边
- (void)alignmentRightToSuperview:(CGFloat)rightPad;

///与父view下对齐
- (void)alignmentBottomToSuperview;

///距父view下边
- (void)alignmentBottomToSuperview:(CGFloat)bottomPad;

///把view的size设置成本来内容大小
- (void)setSizeToIntrinsicContentSize;

///取最右点坐标
- (CGFloat)getMaxX;

///取最下点坐标
- (CGFloat)getMaxY;

///获取子view的最高Y
- (CGFloat)getMaxYOfSubview;

///获取子view的最高X
- (CGFloat)getMaxXOfSubview;

///Y轴上在superview居中
- (void)centerYToSuperview;

///X轴上在superview居中
- (void)centerXToSuperview;

@end

NS_ASSUME_NONNULL_END
