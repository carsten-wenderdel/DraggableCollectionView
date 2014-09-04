//
//  Copyright (c) 2013 Luke Scott
//  https://github.com/lukescott/DraggableCollectionView
//
//  Copyright (c) 2014 Andreas Pasch
//  https://github.com/foby/DraggableCollectionView
//
//  Distributed under MIT license

#import <UIKit/UIKit.h>

@interface LSCollectionViewHelper : NSObject <UIGestureRecognizerDelegate>

- (id) initWithCollectionView: (UICollectionView*) collectionView;

@property (nonatomic, weak, readonly) UICollectionView* collectionView;
@property (nonatomic, weak, readonly) UILongPressGestureRecognizer* longPressGestureRecognizer;
@property (nonatomic, weak, readonly) UIGestureRecognizer* panPressGestureRecognizer;
@property (nonatomic, assign) UIEdgeInsets scrollingEdgeInsets;
@property (nonatomic, assign) CGFloat scrollingSpeed;
@property (nonatomic, assign) BOOL enabled;

- (void) layoutChanged;

@end
