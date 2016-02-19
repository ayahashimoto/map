//
//  MapViewController.h
//  map
//
//  Created by 橋本 遥 on 2016/02/16.
//  Copyright © 2016年 aya. All rights reserved.
//

#import "ViewController.h"

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapViewController : ViewController

@property (assign, nonatomic) BOOL isLocation;

// 現在位置記録用
@property (assign, nonatomic) CLLocationDegrees longitude;
@property (assign, nonatomic) CLLocationDegrees latitude;

@end