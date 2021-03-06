/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@class <AOSNotifySessionDelegate>, CPDistributedNotificationCenter, NSXPCConnection;

@interface AOSNotifySession : NSObject {
    CPDistributedNotificationCenter *_center;
    <AOSNotifySessionDelegate> *_delegate;
    NSXPCConnection *_xpcConnection;
}

@property(retain) CPDistributedNotificationCenter * center;
@property <AOSNotifySessionDelegate> * delegate;
@property(retain) NSXPCConnection * xpcConnection;

+ (id)copyStoreAccount;
+ (id)sharedInstance;

- (void)_destroyXPCConnection;
- (void)_stopVettingNotifications;
- (void)_vetFinished:(id)arg1;
- (void)_vetResultReceived:(id)arg1;
- (void)activationLockStateWithCompletion:(id)arg1;
- (id)addFMFAccount:(id)arg1;
- (id)cancelEmailVet;
- (id)center;
- (id)currentXPCConnection;
- (void)dealloc;
- (id)delegate;
- (void)deviceActivationDidSucceed;
- (void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2;
- (void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2;
- (id)disableActivationLockUsingToken:(id)arg1;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(int)arg2;
- (void)disableLostMode;
- (void)dumpDebugInfo:(id)arg1;
- (id)enableActivationLock;
- (id)enableFMIPInContext:(int)arg1;
- (id)enableLostModeWithInfo:(id)arg1;
- (id)fmfDeviceId;
- (id)fmipAccount;
- (id)fmipDeviceId;
- (void)fmipStateWithCompletion:(id)arg1;
- (id)iCloudAccount;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)isActivationLockStateChangeInProgressWithCompletion:(id)arg1;
- (void)isFMIPStateChangeInProgressWithCompletion:(id)arg1;
- (BOOL)lockdownShouldDisableDevicePairing;
- (BOOL)lockdownShouldDisableDeviceRestore;
- (id)lostModeInfo;
- (BOOL)lostModeIsActive;
- (id)lostModeParams;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (id)removeFMFAccountWithUsername:(id)arg1;
- (id)retrieveAllAccounts:(id*)arg1;
- (id)retrieveFMFAccount:(id*)arg1;
- (void)setCenter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (id)storeAccount;
- (id)vetEmailAccount:(id)arg1;
- (id)xpcConnection;

@end
