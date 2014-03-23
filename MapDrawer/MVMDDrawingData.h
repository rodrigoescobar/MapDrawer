//
//  MVMDDrawingData.h
//  MapDrawer
//
//  Created by Rodrigo Escobar on 23/03/2014.
//  Copyright (c) 2014 Rodrigo Escobar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MVMDDrawingData : NSObject

@property (nonatomic, strong) NSMutableArray* countries;
@property (nonatomic, strong) NSNumber* maximumLongitude;
@property (nonatomic, strong) NSNumber* minimumLongitude;
@property (nonatomic, strong) NSNumber* maximumLatitude;
@property (nonatomic, strong) NSNumber* minimumLatitude;


-(void)extractUsefulInformation:(NSData *)data;

@end
