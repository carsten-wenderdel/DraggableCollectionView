//
//  Copyright (c) 2014 Andreas Pasch
//  https://github.com/foby/DraggableCollectionView
//
//  Distributed under MIT license
//

#import <UIKit/UIKit.h>
#import "UICollectionViewDataSource_Draggable.h"

@interface APDraggableCollectionView : UICollectionView

@property (nonatomic, assign) BOOL draggable;
@property (nonatomic, assign) UIEdgeInsets scrollingEdgeInsets;
@property (nonatomic, assign) CGFloat scrollingSpeed;

@end
