/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMoveAction : DAAction {
    NSString *_destinationContainerId;
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
}

@property(readonly) NSString * destinationContainerId;
@property(readonly) NSString * sourceContainerId;
@property(readonly) NSString * sourceServerId;

- (void)dealloc;
- (id)destinationContainerId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;
- (id)sourceContainerId;
- (id)sourceServerId;

@end
