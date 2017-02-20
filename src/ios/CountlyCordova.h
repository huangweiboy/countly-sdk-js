/********* Echo.h Cordova Plugin Header *******/

#import <Cordova/CDV.h>

@interface CountlyCordova : CDVPlugin

- (void)echo:(CDVInvokedUrlCommand*)command;
- (void)init:(CDVInvokedUrlCommand*)command;
- (void)event:(CDVInvokedUrlCommand*)command;
- (void)setloggingenabled:(CDVInvokedUrlCommand*)command;
- (void)setuserdata:(CDVInvokedUrlCommand*)command;
- (void)onregistrationid:(CDVInvokedUrlCommand*)command;
- (void)start:(CDVInvokedUrlCommand*)command;
- (void)stop:(CDVInvokedUrlCommand*)command;
- (void)recordView:(CDVInvokedUrlCommand*)command;
- (void)changeDeviceId:(CDVInvokedUrlCommand*)command;
- (void)setHttpPostForced:(CDVInvokedUrlCommand*)command;
- (void)enableParameterTamperingProtection:(CDVInvokedUrlCommand*)command;
- (void)setLocation:(CDVInvokedUrlCommand*)command;
- (void)enableCrashReporting:(CDVInvokedUrlCommand*)command;
- (void)addCrashLog:(CDVInvokedUrlCommand*)command;
- (void)userData.setProperty:(CDVInvokedUrlCommand*)command;
- (void)userData.increment:(CDVInvokedUrlCommand*)command;
- (void)userData.incrementBy:(CDVInvokedUrlCommand*)command;
- (void)userData.multiply:(CDVInvokedUrlCommand*)command;
- (void)userData.saveMax:(CDVInvokedUrlCommand*)command;
- (void)userData.saveMin:(CDVInvokedUrlCommand*)command;
- (void)demo:(CDVInvokedUrlCommand*)command;

@end
