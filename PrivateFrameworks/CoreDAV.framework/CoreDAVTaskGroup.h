/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskManager>, <CoreDAVAccountInfoProvider>, NSMutableSet;



@interface CoreDAVTaskGroup : NSObject 
{
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    id _delegate;
    NSMutableSet *_outstandingTasks;
    BOOL _isCancelling;
}


- (void)_tearDownAllTasks;
- (void)cancelTasks;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 delegate:(id)arg3;
- (void)syncAway;
- (void)bailWithError:(id)arg1;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)dealloc;

@end