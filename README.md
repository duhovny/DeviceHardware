DeviceHardware
==============

Determines iOS device version.

```objective-c

// Specific platform (ex.: iPad 2 GSM)
DeviceHardwareSpecificPlatform deviceHardwareSpecificPlatform = [DeviceHardware specificPlatform];

// General platform (ex.: iPad 2)
DeviceHardwareGeneralPlatform deviceHardwareGeneralPlatform = [DeviceHardware generalPlatform];

// Platform type (ex.: iPad)
DeviceHardwarePlatformType deviceHardwarePlatformType = [DeviceHardware platformType];

// Platform string (ex.: @"iPad 2 (GSM)")
NSString *platformString = [DeviceHardware platformString];

// Raw machine string (ex.: @"iPad2,2")
NSString *machineString = [DeviceHardware machine];

```
