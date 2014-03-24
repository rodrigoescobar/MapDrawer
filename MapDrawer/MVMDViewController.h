//
//  MVMDViewController.h
//  MapDrawer
//
//  Created by Rodrigo Escobar on 23/03/2014.
//  Copyright (c) 2014 Rodrigo Escobar. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MVMDMapView;

@interface MVMDViewController : UIViewController <UIScrollViewDelegate>
@property (strong, nonatomic) MVMDMapView* myView; //View where the map will be drawn


@end
