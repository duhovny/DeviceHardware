//
//  DeviceHardware.h
//
//  Used to determine version of device
//  this software is running on.
//
//  You can get:
//
//  - Specific platform (ex.: iPad 2 GSM)
//  - General Platform  (ex.: iPad 2)
//  - Platform Type		(ex.: iPad)
//  - Platform String	(ex.: "iPad 2 (GSM)")
//
//  Take care,
//  Bowyer Worldwide
//

#import <Foundation/Foundation.h>

typedef enum {
	DeviceHardwareSpecificPlatform_Unknown,
	DeviceHardwareSpecificPlatform_iPhone_1G,
	DeviceHardwareSpecificPlatform_iPhone_3G,
	DeviceHardwareSpecificPlatform_iPhone_3GS,
	DeviceHardwareSpecificPlatform_iPhone_4,
	DeviceHardwareSpecificPlatform_iPhone_4_Verizon,
	DeviceHardwareSpecificPlatform_iPhone_4S,
	DeviceHardwareSpecificPlatform_iPhone_5_GSM,
	DeviceHardwareSpecificPlatform_iPhone_5_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPod_Touch_1G,
	DeviceHardwareSpecificPlatform_iPod_Touch_2G,
	DeviceHardwareSpecificPlatform_iPod_Touch_3G,
	DeviceHardwareSpecificPlatform_iPod_Touch_4G,
	DeviceHardwareSpecificPlatform_iPod_Touch_5G,
	DeviceHardwareSpecificPlatform_iPad,
	DeviceHardwareSpecificPlatform_iPad_2_GSM,
	DeviceHardwareSpecificPlatform_iPad_2_CDMA,
	DeviceHardwareSpecificPlatform_iPad_2_WiFi,
	DeviceHardwareSpecificPlatform_iPad_3_WiFi,
	DeviceHardwareSpecificPlatform_iPad_3_GSM,
	DeviceHardwareSpecificPlatform_iPad_3_CDMA,
	DeviceHardwareSpecificPlatform_iPad_4_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Mini_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Mini_GSM,
	DeviceHardwareSpecificPlatform_iPad_Mini_CDMA_GSM,
	DeviceHardwareSpecificPlatform_Simulator
} DeviceHardwareSpecificPlatform;

typedef enum {
	DeviceHardwareGeneralPlatform_Unknown,
	DeviceHardwareGeneralPlatform_iPhone_1G,
	DeviceHardwareGeneralPlatform_iPhone_3G,
	DeviceHardwareGeneralPlatform_iPhone_3GS,
	DeviceHardwareGeneralPlatform_iPhone_4,
	DeviceHardwareGeneralPlatform_iPhone_4S,
	DeviceHardwareGeneralPlatform_iPhone_5,
	DeviceHardwareGeneralPlatform_iPod_Touch_1G,
	DeviceHardwareGeneralPlatform_iPod_Touch_2G,
	DeviceHardwareGeneralPlatform_iPod_Touch_3G,
	DeviceHardwareGeneralPlatform_iPod_Touch_4G,
	DeviceHardwareGeneralPlatform_iPod_Touch_5G,
	DeviceHardwareGeneralPlatform_iPad,
	DeviceHardwareGeneralPlatform_iPad_2,
	DeviceHardwareGeneralPlatform_iPad_3,
	DeviceHardwareGeneralPlatform_iPad_4,
	DeviceHardwareGeneralPlatform_iPad_Mini,
	DeviceHardwareGeneralPlatform_Simulator
} DeviceHardwareGeneralPlatform;

typedef enum {
	DeviceHardwarePlatformType_Unknown,
	DeviceHardwarePlatformType_iPhone,
	DeviceHardwarePlatformType_iPod_Touch,
	DeviceHardwarePlatformType_iPad,
	DeviceHardwarePlatformType_Simulator
} DeviceHardwarePlatformType;

@interface DeviceHardware : NSObject

+ (DeviceHardwareSpecificPlatform)specificPlatform;
+ (DeviceHardwareGeneralPlatform)generalPlatform;
+ (DeviceHardwarePlatformType)platformType;
+ (NSString *)platformString;

+ (NSString *)machine;

@end