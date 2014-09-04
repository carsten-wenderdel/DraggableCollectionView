//
//  Copyright (c) 2014 Andreas Pasch
//  https://github.com/foby/DraggableCollectionView
//
//  Distributed under MIT license
//

#import "APDraggableCollectionView.h"
#import "LSCollectionViewHelper.h"

@interface APDraggableCollectionView ()
@property (nonatomic, strong) LSCollectionViewHelper* helper;
@end

@implementation APDraggableCollectionView

- (LSCollectionViewHelper*) getHelper {
    if (_helper == nil) {
        _helper = [[LSCollectionViewHelper alloc] initWithCollectionView: self];
    }
    return _helper;
}

- (void) setCollectionViewLayout: (UICollectionViewLayout*) collectionViewLayout {
    [self.helper layoutChanged];
}

- (BOOL) draggable {
    return [self getHelper].enabled;
}

- (void) setDraggable: (BOOL) draggable {
    [self getHelper].enabled = draggable;
}

- (UIEdgeInsets) scrollingEdgeInsets {
    return [self getHelper].scrollingEdgeInsets;
}

- (void) setScrollingEdgeInsets: (UIEdgeInsets) scrollingEdgeInsets {
    [self getHelper].scrollingEdgeInsets = scrollingEdgeInsets;
}

- (CGFloat) scrollingSpeed {
    return [self getHelper].scrollingSpeed;
}

- (void) setScrollingSpeed: (CGFloat) scrollingSpeed {
    [self getHelper].scrollingSpeed = scrollingSpeed;
}

@end
