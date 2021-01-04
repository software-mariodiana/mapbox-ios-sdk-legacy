//
//  RMXSimpleWebTileSource.h
//  Pods
//
//  Created by Mario Diana on 1/3/21.
//
//

#import "RMAbstractWebMapSource.h"

@protocol RMXSimpleWebTileSourceDelegate <NSObject>
/** Supply network-based map tiles from a custom source. */
- (NSURL *)URLForTile:(RMTile)tile;

@optional
/** Objects should override when not using Open Street Maps as a source. */
- (NSString *)shortAttribution;

@end


/**
 * A simple network-based location for tile maps, using Open Street Maps by default.
 *
 * Tiles are fetched from Open Street Maps and then cached. Delegates are encouraged 
 * to fetch tiles from another source.
 */
@interface RMXSimpleWebTileSource : RMAbstractWebMapSource
@property (nonatomic, weak) id<RMXSimpleWebTileSourceDelegate> delegate;
@end
