/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDataSet : NSObject <NSCopying> {
    NSArray * _dataItems;
    NSArray * _itemIDs;
    NSSet * _itemTypes;
    NSIndexSet * _updatedIndexes;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _visibleIndexRange;
}

@property (nonatomic, copy) NSArray *dataItems;
@property (nonatomic, readonly, copy) NSArray *itemIDs;
@property (nonatomic, readonly, copy) NSSet *itemTypes;
@property (nonatomic, copy) NSIndexSet *updatedIndexes;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } visibleIndexRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataItems;
- (id)dataSetByUpdatingDataItemsAtIndexes:(id)arg1 withDataItems:(id)arg2;
- (id)dataSetByUpdatingVisibleIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithDataItems:(id)arg1 itemIDs:(id)arg2 itemTypes:(id)arg3;
- (id)itemIDs;
- (id)itemTypes;
- (void)setDataItems:(id)arg1;
- (void)setUpdatedIndexes:(id)arg1;
- (void)setVisibleIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)updatedIndexes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleIndexRange;

@end
