#import <Foundation/Foundation.h>
#import "MEGANode.h"

/**
 * @brief List of MEGANode objects.
 *
 * Objects of this class are immutable.
 *
 * @see [MEGASdk childrenForParent:], [MEGASdk inShares:].
 */
@interface MEGANodeList : NSObject

/**
 * @brief The number of MEGANode objects in the list.
 */
@property (readonly, nonatomic) NSNumber *size;

/**
 * @brief Creates a copy of this MEGANodeList object.
 *
 * The resulting object is fully independent of the source MEGANodeList,
 * it contains a copy of all internal attributes, so it will be valid after
 * the original object is deleted.
 *
 * You are the owner of the returned object.
 *
 * @return Copy of the MEGANodeList object.
 */
- (instancetype)clone;


/**
 * @brief Returns the MEGANode at the position index in the MEGANodeList.
 *
 * If the index is >= the size of the list, this function returns nil.
 *
 * @param index Position of the MEGANode that we want to get for the list.
 * @return MEGANode at the position index in the list.
 */
- (MEGANode *)nodeAtIndex:(NSInteger)index;

@end
